
// Generated from SinkedSea.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SinkedSeaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SinkedSeaParser.
 */
class  SinkedSeaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SinkedSeaParser.
   */
    virtual antlrcpp::Any visitParameters(SinkedSeaParser::ParametersContext *context) = 0;

    virtual antlrcpp::Any visitArguments(SinkedSeaParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitExpression(SinkedSeaParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNewChan(SinkedSeaParser::NewChanContext *context) = 0;

    virtual antlrcpp::Any visitChanRead(SinkedSeaParser::ChanReadContext *context) = 0;

    virtual antlrcpp::Any visitCommand(SinkedSeaParser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitGlobalAssignment(SinkedSeaParser::GlobalAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitLocalAssignment(SinkedSeaParser::LocalAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(SinkedSeaParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(SinkedSeaParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitCom1(SinkedSeaParser::Com1Context *context) = 0;

    virtual antlrcpp::Any visitCom2(SinkedSeaParser::Com2Context *context) = 0;

    virtual antlrcpp::Any visitIf2(SinkedSeaParser::If2Context *context) = 0;

    virtual antlrcpp::Any visitIf1(SinkedSeaParser::If1Context *context) = 0;

    virtual antlrcpp::Any visitReturnE(SinkedSeaParser::ReturnEContext *context) = 0;

    virtual antlrcpp::Any visitPrint(SinkedSeaParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitThread(SinkedSeaParser::ThreadContext *context) = 0;

    virtual antlrcpp::Any visitChanAssignment(SinkedSeaParser::ChanAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitWhileLoop(SinkedSeaParser::WhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitFile(SinkedSeaParser::FileContext *context) = 0;


};

