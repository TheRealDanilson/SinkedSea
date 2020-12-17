#ifndef ANTLR_CUSTOM_CPP
#define ANTLR_CUSTOM_CPP
#include <string>
#include <iostream>
#include "antlr4-runtime/SinkedSeaLexer.h"
#include "antlr4-runtime/SinkedSeaParser.h"
#include "antlr4-runtime/SinkedSeaBaseVisitor.h"
#include "ast.hpp"

using namespace std;
using namespace antlr4;

namespace SinkedSea
{
    // Visit the nodes of the SinkedSea Parse Tree and generate the AST.
    // Each rule in the SinkedSea.g4 grammar file has an associated function here to generate the AST
    class Visitor : public SinkedSeaVisitor
    {
        // Visit the parent node of any SinkedSea file
        antlrcpp::Any visitFile(SinkedSeaParser::FileContext *context)
        {
            MultiTree *mt = new MultiTree;
            for (auto command : context->command())
            {
                mt->commands.push_back(visit(command));
            }
            return shared_ptr<CommandTree>(mt);
        }

        antlrcpp::Any visitArguments(SinkedSeaParser::ArgumentsContext *context)
        {
            std::vector<shared_ptr<Tree>> exps;
            for (auto exp : context->expression())
            {
                exps.push_back(visit(exp));
            }

            return exps;
        }

        antlrcpp::Any visitNewChan(SinkedSeaParser::NewChanContext *context)
        {
            ChanTree *cTree = new ChanTree;
            cTree->ch = shared_ptr<Channel>(new Channel);
            return shared_ptr<Tree>(cTree);
        }

        antlrcpp::Any visitChanRead(SinkedSeaParser::ChanReadContext *context)
        {
            ReadChanTree *crTree = new ReadChanTree;
            crTree->child = visit(context->expression());
            return shared_ptr<Tree>(crTree);
        }

        antlrcpp::Any visitExpression(SinkedSeaParser::ExpressionContext *context)
        {
            if (context->NAME() != NULL && context->arguments() == NULL)
            {
                VarTree *vTree = new VarTree;
                vTree->name = context->NAME()->getText();
                return shared_ptr<Tree>(vTree);
            }

            if (context->INT() != NULL)
            {
                IntTree *iTree = new IntTree;
                iTree->val = stoi(context->INT()->getText());
                return shared_ptr<Tree>(iTree);
            }

            if (context->BOOL() != NULL)
            {
                BoolTree *bTree = new BoolTree;

                if (context->BOOL()->getText() == "true")
                {
                    bTree->val = true;
                }
                else
                {
                    bTree->val = false;
                }
                return shared_ptr<Tree>(bTree);
            }
            if (context->op != NULL || context->MULT() != NULL || context->LT() != NULL || context->EQ() != NULL || context->AND() != NULL || context->OR() != NULL)
            {
                auto exp1 = context->expression()[0];
                auto exp2 = context->expression()[1];

                BinaryOp bop;
                if (context->op)
                {
                    bop = bops[context->op->getText()];
                }
                else if (context->MULT())
                {
                    bop = bops[context->MULT()->getText()];
                }
                else if (context->LT())
                {
                    bop = bops[context->LT()->getText()];
                }
                else if (context->EQ())
                {
                    bop = bops[context->EQ()->getText()];
                }
                else if (context->AND())
                {
                    bop = bops[context->AND()->getText()];
                }
                else if (context->OR())
                {
                    bop = bops[context->OR()->getText()];
                }

                switch (bop)
                {
                case ADD:
                case SUB:
                case MULT:
                {
                    IntBOPTree *iTree = new IntBOPTree;
                    iTree->bop = bop;
                    iTree->LTree = visit(exp1);
                    iTree->RTree = visit(exp2);
                    return shared_ptr<Tree>(iTree);
                    break;
                }
                case AND:
                case OR:
                case EQ:
                case LT:
                {
                    BoolBOPTree *bTree = new BoolBOPTree;
                    bTree->bop = bop;
                    bTree->LTree = visit(exp1);
                    bTree->RTree = visit(exp2);
                    return shared_ptr<Tree>(bTree);
                    break;
                }
                }
            }

            if (context->arguments() != NULL)
            {
                FunctionTree *fTree = new FunctionTree;
                fTree->name = context->NAME()->getText();
                fTree->args = visit(context->arguments()).as<vector<shared_ptr<Tree>>>();
                return shared_ptr<Tree>(fTree);
            }

            if (context->newChan() != NULL)
            {
                return visit(context->newChan());
            }

            if (context->chanRead() != NULL)
            {
                return visit(context->chanRead());
            }

            throw runtime_error("Unimplemented expression rule");
        }

        antlrcpp::Any visitGlobalAssignment(SinkedSeaParser::GlobalAssignmentContext *context)
        {
            AssignTree *asgTree = new AssignTree;
            asgTree->name = context->NAME()->getText();
            asgTree->exp = visit(context->expression());
            asgTree->global = true;

            return shared_ptr<CommandTree>(asgTree);
        }

        antlrcpp::Any visitLocalAssignment(SinkedSeaParser::LocalAssignmentContext *context)
        {
            AssignTree *asgTree = new AssignTree;
            asgTree->name = context->NAME()->getText();
            asgTree->exp = visit(context->expression());
            asgTree->local = true;

            return shared_ptr<CommandTree>(asgTree);
        }

        antlrcpp::Any visitAssignment(SinkedSeaParser::AssignmentContext *context)
        {
            AssignTree *asgTree = new AssignTree;
            asgTree->name = context->NAME()->getText();
            asgTree->exp = visit(context->expression());

            return shared_ptr<CommandTree>(asgTree);
        }

        antlrcpp::Any visitParameters(SinkedSeaParser::ParametersContext *context)
        {
            vector<string> names;
            for (auto name : context->NAME())
            {
                names.push_back(name->getText());
            }
            return names;
        }

        antlrcpp::Any visitDeclaration(SinkedSeaParser::DeclarationContext *context)
        {
            DeclarationTree *decTree = new DeclarationTree;
            decTree->name = context->NAME()->getText();
            decTree->parameters = visit(context->parameters()).as<std::vector<std::string>>();
            int i = 0;
            for (auto command : context->command())
            {
                decTree->commands.push_back(visit(command));
            }

            return shared_ptr<CommandTree>(decTree);
        }

        antlrcpp::Any visitCom1(SinkedSeaParser::Com1Context *context)
        {
            MultiTree *mt = new MultiTree;

            int i = 0;
            for (auto com : context->command())
            {
                mt->commands.push_back(visit(com));
            }

            return shared_ptr<CommandTree>(mt);
        }

        antlrcpp::Any visitCom2(SinkedSeaParser::Com2Context *context)
        {
            MultiTree *mt = new MultiTree;

            for (auto com : context->command())
            {
                mt->commands.push_back(visit(com));
            }

            return shared_ptr<CommandTree>(mt);
        }

        antlrcpp::Any visitIf2(SinkedSeaParser::If2Context *context)
        {
            IF2Tree *ifTree = new IF2Tree;
            ifTree->guard = visit(context->expression());
            ifTree->com1 = visit(context->com1());
            ifTree->com2 = visit(context->com2());

            return shared_ptr<CommandTree>(ifTree);
        }

        antlrcpp::Any visitIf1(SinkedSeaParser::If1Context *context)
        {
            IF1Tree *ifTree = new IF1Tree;
            ifTree->guard = visit(context->expression());
            ifTree->com = visit(context->com1());

            return shared_ptr<CommandTree>(ifTree);
        }

        antlrcpp::Any visitReturnE(SinkedSeaParser::ReturnEContext *context)
        {
            ReturnTree *rt = new ReturnTree;
            rt->exp = visit(context->expression());
            return shared_ptr<CommandTree>(rt);
        }

        antlrcpp::Any visitPrint(SinkedSeaParser::PrintContext *context)
        {
            PrintTree *pt = new PrintTree;
            pt->exp = visit(context->expression());

            return shared_ptr<CommandTree>(pt);
        }

        antlrcpp::Any visitWhileLoop(SinkedSeaParser::WhileLoopContext *context)
        {
            WhileTree *wt = new WhileTree;
            wt->lcondition = visit(context->expression());
            MultiTree *mt = new MultiTree;
            for (auto command : context->command())
            {
                mt->commands.push_back(visit(command));
            }
            wt->commands = shared_ptr<MultiTree>(mt);

            return shared_ptr<CommandTree>(wt);
        }

        antlrcpp::Any visitThread(SinkedSeaParser::ThreadContext *context)
        {
            ThreadTree *tt = new ThreadTree;
            tt->child = visit(context->expression());

            return shared_ptr<CommandTree>(tt);
        }

        antlrcpp::Any visitChanAssignment(SinkedSeaParser::ChanAssignmentContext *context)
        {
            ChanAssignTree *caTree = new ChanAssignTree;
            caTree->LTree = visit(context->expression()[0]);
            caTree->RTree = visit(context->expression()[1]);
            return shared_ptr<CommandTree>(caTree);
        }

        antlrcpp::Any visitCommand(SinkedSeaParser::CommandContext *context)
        {
            if (context->globalAssignment() != NULL)
            {
                return visit(context->globalAssignment());
            }

            if (context->localAssignment() != NULL)
            {
                return visit(context->localAssignment());
            }

            if (context->assignment() != NULL)
            {
                return visit(context->assignment());
            }

            if (context->declaration() != NULL)
            {
                return visit(context->declaration());
            }

            if (context->if2() != NULL)
            {
                return visit(context->if2());
            }

            if (context->if1() != NULL)
            {
                return visit(context->if1());
            }

            if (context->returnE() != NULL)
            {
                return visit(context->returnE());
            }

            if (context->print() != NULL)
            {
                return visit(context->print());
            }

            if (context->whileLoop() != NULL)
            {
                return visit(context->whileLoop());
            }

            if (context->thread() != NULL)
            {
                return visit(context->thread());
            }

            if (context->chanAssignment() != NULL)
            {
                return visit(context->chanAssignment());
            }

            if (context->expression() != NULL)
            {
                ExpressionComTree *ecTree = new ExpressionComTree;
                ecTree->exp = visit(context->expression());
                return shared_ptr<CommandTree>(ecTree);
            }

            throw std::runtime_error("Unimplemented rule for command");
        }
    };
}; // namespace SinkedSea
#endif