#include "ast.hpp"
#include <stdexcept>
#include <iostream>

namespace SinkedSea
{

    std::map<std::string, BinaryOp> bops = {{"+", ADD}, {"-", SUB}, {"*", MULT}, {"&&", AND}, {"||", OR}, {"==", EQ}, {"<", LT}};
    std::map<std::string, std::tuple<std::vector<std::string>, std::vector<std::shared_ptr<CommandTree>>>> FunctionStore;
    std::mutex globalM;
    std::condition_variable globalCV;
    int globalCount = 0;

    Store globalSt = {};

    std::tuple<Store, std::any> VarTree::eval(Store st)
    {
        if (st.count(name) != 0)
        {
            return std::make_tuple(st, st[name]);
        }
        else
        {
            return std::make_tuple(st, globalSt[name]);
        }
    }

    std::tuple<Store, std::any> IntTree::eval(Store st)
    {
        return std::make_tuple(st, val);
    }

    std::tuple<Store, std::any> BoolTree::eval(Store st)
    {
        return std::make_tuple(st, val);
    }

    std::tuple<Store, std::any> StringTree::eval(Store st)
    {
        return std::make_tuple(st, val);
    }

    std::tuple<Store, std::any> ChanTree::eval(Store st)
    {
        return std::make_tuple(st, ch);
    }

    std::tuple<Store, std::any> ReadChanTree::eval(Store st)
    {
        auto [stc, val] = child.get()->eval(st);
        if (val.type() != typeid(std::shared_ptr<Channel>))
        {
            throw std::runtime_error("Expected to read channel");
        }
        std::shared_ptr<Channel> ch = std::any_cast<std::shared_ptr<Channel>>(val);
        return std::make_tuple(stc, ch.get()->recVal());
    }

    std::tuple<Store, std::any> IntBOPTree::eval(Store st)
    {
        auto [st1, v1] = LTree->eval(st);
        auto [st2, v2] = RTree->eval(st);

        int i1 = std::any_cast<int>(v1);
        int i2 = std::any_cast<int>(v2);

        int val;

        switch (bop)
        {
        case ADD:
            val = i1 + i2;
            break;
        case SUB:
            val = i1 - i2;
            break;
        case MULT:
            val = i1 * i2;
            break;
        default:
            throw std::runtime_error("Bad BOP for IntBOPTree");
        }

        return std::make_tuple(st, val);
    }

    std::tuple<Store, std::any> BoolBOPTree::eval(Store st)
    {
        auto [st1, v1] = LTree->eval(st);
        auto [st2, v2] = RTree->eval(st);

        bool val;

        switch (bop)
        {
        case AND:
        {
            bool b1 = std::any_cast<bool>(v1);
            bool b2 = std::any_cast<bool>(v2);
            val = b1 && b2;
            break;
        }
        case OR:
        {
            bool b1 = std::any_cast<bool>(v1);
            bool b2 = std::any_cast<bool>(v2);
            val = b1 || b2;
            break;
        }
        case EQ:
        {
            if (v1.type() == typeid(bool) && v2.type() == typeid(bool))
            {
                bool b1 = std::any_cast<bool>(v1);
                bool b2 = std::any_cast<bool>(v2);
                val = b1 == b2;
            }
            else if (v1.type() == typeid(int) && v2.type() == typeid(int) )
            {
                int i1 = std::any_cast<int>(v1);
                int i2 = std::any_cast<int>(v2);
                val = i1 == i2;
            }
            else if (v1.type() == typeid(std::string) && v2.type() == typeid(std::string))
            {
                std::string s1 = std::any_cast<std::string>(v1);
                std::string s2 = std::any_cast<std::string>(v2);
                val = s1 == s2;
            }
            else if (v1.type() == typeid(std::shared_ptr<Channel>) && v2.type() == typeid(std::shared_ptr<Channel>))
            {
                std::shared_ptr<Channel> c1 = std::any_cast<std::shared_ptr<Channel>>(v1);
                std::shared_ptr<Channel> c2 = std::any_cast<std::shared_ptr<Channel>>(v2);
                val = c1.get() == c2.get();
            } else {
                val = false;
            }
            break;
        }
        case LT:
        {
            int i1 = std::any_cast<int>(v1);
            int i2 = std::any_cast<int>(v2);
            val = i1 < i2;
            break;
        }
        default:
        {
            throw std::runtime_error("Bad BOP for BOOLBOPTree");
        }
        }

        return std::make_tuple(st, val);
    }

    std::tuple<Store, std::any> FunctionTree::eval(Store st)
    {
        Store stf = st;

        auto [params, commands] = FunctionStore[name];
        if (commands.size() == 0)
        {
            throw std::runtime_error("Empty function definition for " + name);
        }

        if (params.size() != args.size())
        {
            throw std::runtime_error("Bad number of args for " + name);
        }

        for (int i = 0; i < args.size(); i++)
        {
            auto [stl, v] = args[i].get()->eval(stf);
            stl[params[i]] = v;
            stf = stl;
        }

        for (auto command : commands)
        {
            auto [stl, v] = command.get()->eval(stf);

            if (v.has_value())
            {
                return std::make_tuple(st, v);
            }
            stf = stl;
        }

        throw std::runtime_error("No return in function call for " + name);
    }

    std::tuple<Store, std::any> AssignTree::eval(Store st)
    {
        auto [ste, v] = exp->eval(st);
        if (global)
        {
            globalSt[name] = v;
        }
        else if (local)
        {
            ste[name] = v;
        }
        else if (globalSt.count(name) == 0 && ste.count(name) == 0)
        {
            ste[name] = v;
        }
        else if (globalSt.count(name) != 0 && ste.count(name) == 0)
        {
            globalSt[name] = v;
        }
        else if (ste.count(name) != 0 && globalSt.count(name) == 0)
        {
            ste[name] = v;
        }
        else
        {
            throw std::runtime_error("Ambigous scope for variable " + name);
        }

        return std::make_tuple(ste, std::any());
    }

    std::tuple<Store, std::any> DeclarationTree::eval(Store st)
    {
        FunctionStore[name] = std::make_tuple(parameters, commands);

        return std::make_tuple(st, std::any());
    }

    std::tuple<Store, std::any> IF1Tree::eval(Store st)
    {
        auto [stg, vg] = guard->eval(st);
        bool bg = std::any_cast<bool>(vg);

        if (bg)
        {
            return com->eval(st);
        }

        return std::make_tuple(st, std::any());
    }

    std::tuple<Store, std::any> IF2Tree::eval(Store st)
    {
        auto [stg, vg] = guard->eval(st);
        bool bg = std::any_cast<bool>(vg);

        if (bg)
        {
            return com1->eval(st);
        }
        else
        {
            return com2->eval(st);
        }

        return std::make_tuple(st, std::any());
    }

    std::tuple<Store, std::any> ReturnTree::eval(Store st)
    {
        return exp->eval(st);
    }

    std::tuple<Store, std::any> PrintTree::eval(Store st)
    {
        auto [ste, v] = exp->eval(st);
        std::unique_lock<std::mutex> lk(globalM);
        if (v.type() == typeid(int))
        {
            std::cout << std::any_cast<int>(v) << std::endl;
        }

        if (v.type() == typeid(bool))
        {
            std::cout << std::any_cast<bool>(v) << std::endl;
        }

        if (v.type() == typeid(std::string))
        {
            std::cout << std::any_cast<std::string>(v) << std::endl;
        }

        return std::make_tuple(st, std::any());
    }

    std::tuple<Store, std::any> MultiTree::eval(Store st)
    {
        for (auto command : commands)
        {
            auto [stc, v] = command.get()->eval(st);
            if (v.has_value())
            {
                return std::make_tuple(stc, v);
            }

            st = stc;
        }
        return std::make_tuple(st, std::any());
    }

    std::tuple<Store, std::any> WhileTree::eval(Store st)
    {
        Tree *lTree = lcondition.get();
        auto [sti, val] = lTree->eval(st);
        bool guard = std::any_cast<bool>(val);

        while (guard)
        {
            auto [stl, v] = commands.get()->eval(st);
            if (v.has_value())
            {
                return std::make_tuple(stl, v);
            }
            st = stl;
            auto [stg, gval] = lTree->eval(st);
            guard = std::any_cast<bool>(gval);
        }

        return std::make_tuple(st, std::any());
    }

    // Helper function to evaluate child tree, as we can't directly call a parent object's members within a thread
    void threadHelper(std::shared_ptr<Tree> t, Store st)
    {
        t.get()->eval(st);
        std::unique_lock<std::mutex> lk(globalM);
        globalCount--;
        lk.unlock();
        globalCV.notify_all();
    }

    std::tuple<Store, std::any> ThreadTree::eval(Store st)
    {
        std::unique_lock<std::mutex> lk(globalM);
        globalCount++;

        std::thread t(threadHelper, child, st);
        t.detach();
        return std::make_tuple(st, std::any());
    }

    std::tuple<Store, std::any> ChanAssignTree::eval(Store st)
    {
        auto [stl, lval] = LTree.get()->eval(st);
        auto [str, rval] = RTree.get()->eval(stl);

        if (rval.type() != typeid(std::shared_ptr<Channel>))
        {
            throw std::runtime_error("Expected channel on right side of channel assignment");
        }

        std::shared_ptr<Channel> rchan = std::any_cast<std::shared_ptr<Channel>>(rval);
        rchan.get()->sendVal(lval);

        return std::make_tuple(str, std::any());
    }

    std::tuple<Store, std::any> ExpressionComTree::eval(Store st)
    {
        auto [ste, val] = exp->eval(st);
        return std::make_tuple(st, std::any());
    }

}; // namespace SinkedSea