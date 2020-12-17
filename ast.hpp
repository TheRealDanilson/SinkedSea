#ifndef AST_H
#define AST_H
#include <any>
#include <string>
#include <tuple>
#include <map>
#include <vector>
#include <memory>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "channel.hpp"

namespace SinkedSea
{
    enum BinaryOp
    {
        ADD,
        SUB,
        MULT,
        AND,
        OR,
        EQ,
        LT
    };

    // Map between variable names and variable values
    using Store = std::map<std::string, std::any>;

    // Abstract class for any AST tree that can be directly evaluated
    class Tree
    {
    public:
        virtual std::tuple<Store, std::any> eval(Store st) = 0;
    };

    // Evaluates to the current value for the variable represented by this tree. Defaults to the value in the global store if no value exists in the local store
    class VarTree : public Tree
    {
    public:
        std::string name;

        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates to the integer stored in this tree
    class IntTree : public Tree
    {
    public:
        int val;

    public:
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates to the boolean stored in this tree
    class BoolTree : public Tree
    {
    public:
        bool val;

    public:
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates to the boolean stored in this tree
    class ChanTree : public Tree
    {
    public:
        std::shared_ptr<Channel> ch;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates to the value stored by the channel in child. Blocks until the channel has a value, and leaves the channel empty (side effect)
    class ReadChanTree : public Tree
    {
    public:
        std::shared_ptr<Tree> child;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates to an integer after evaluating a binary operation
    class IntBOPTree : public Tree
    {
    public:
        std::shared_ptr<Tree> LTree;
        std::shared_ptr<Tree> RTree;

        BinaryOp bop;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates to an boolean after evaluating a binary operation
    class BoolBOPTree : public Tree
    {
    public:
        std::shared_ptr<Tree> LTree;
        std::shared_ptr<Tree> RTree;

        BinaryOp bop;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates the given args and then evaluates a function in the FunctionStore
    class FunctionTree : public Tree
    {
    public:
        std::string name;
        std::vector<std::shared_ptr<Tree>> args;

        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Abstract class for any AST that can have side effects (except reading from a channel)
    class CommandTree : public Tree
    {
    public:
        virtual std::tuple<Store, std::any> eval(Store st) = 0;
    };

    // Stores the value of exp in either the global or store
    class AssignTree : public CommandTree
    {
    public:
        std::string name;
        std::shared_ptr<Tree> exp;
        bool global = false;
        bool local = false;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Creates a function in the FunctionStore
    class DeclarationTree : public CommandTree
    {
    public:
        std::string name;
        std::vector<std::string> parameters;

        std::vector<std::shared_ptr<CommandTree>> commands;

        std::tuple<Store, std::any> eval(Store st) override;
    };

    // If statement with only one branch that gets run if the guard evaluates to true
    class IF1Tree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> guard;

        std::shared_ptr<CommandTree> com;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // If statement with two branches. Runs com1 if guard == true, com2 otherwise
    class IF2Tree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> guard;

        std::shared_ptr<CommandTree> com1;
        std::shared_ptr<CommandTree> com2;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluates to the value of exp. Its value is only ever used within a FunctionTree
    class ReturnTree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> exp;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Prints the value of exp to stdout
    class PrintTree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> exp;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Stores and runs an arbitrary number of commands
    class MultiTree : public CommandTree
    {
    public:
        std::vector<std::shared_ptr<CommandTree>> commands;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Runs a while loop; commands is run until lcondition evaluates to false
    class WhileTree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> lcondition;
        std::shared_ptr<MultiTree> commands;

        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Creates a new thread where child is evaluated
    class ThreadTree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> child;

        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Assigns a value to a channel. RTree should evaluate to a channel and blocks if the channel already contains a value
    class ChanAssignTree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> LTree;
        std::shared_ptr<Tree> RTree;

        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Evaluate an expression but throw away the value
    class ExpressionComTree : public CommandTree
    {
    public:
        std::shared_ptr<Tree> exp;
        std::tuple<Store, std::any> eval(Store st) override;
    };

    // Maps the string value of a bop to its enum
    extern std::map<std::string, BinaryOp> bops;
    // Stores the commands for all declared functions
    extern std::map<std::string, std::tuple<std::vector<std::string>, std::vector<std::shared_ptr<CommandTree>>>> FunctionStore;
    // Stores all variables that can be accessed and modified globally
    extern Store globalSt;
    // A mutex that can be used globally by the interpreter. Just used for the globalCV and globalCount currently
    extern std::mutex globalM;
    // A condition variable that can be used globally by the interpreter. Currrently used to block the main thread until all other threads complete.
    extern std::condition_variable globalCV;
    // A global count of running threads. Should only be accessed with globalM
    extern int globalCount;
}; // namespace SinkedSea

#endif