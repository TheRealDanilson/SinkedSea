
// Generated from SinkedSea.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SinkedSeaVisitor.h"


/**
 * This class provides an empty implementation of SinkedSeaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SinkedSeaBaseVisitor : public SinkedSeaVisitor {
public:

  virtual antlrcpp::Any visitParameters(SinkedSeaParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(SinkedSeaParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(SinkedSeaParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewChan(SinkedSeaParser::NewChanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChanRead(SinkedSeaParser::ChanReadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand(SinkedSeaParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalAssignment(SinkedSeaParser::GlobalAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalAssignment(SinkedSeaParser::LocalAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(SinkedSeaParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(SinkedSeaParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCom1(SinkedSeaParser::Com1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCom2(SinkedSeaParser::Com2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf2(SinkedSeaParser::If2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf1(SinkedSeaParser::If1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnE(SinkedSeaParser::ReturnEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(SinkedSeaParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThread(SinkedSeaParser::ThreadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChanAssignment(SinkedSeaParser::ChanAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileLoop(SinkedSeaParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile(SinkedSeaParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }


};

