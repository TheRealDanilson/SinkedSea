
// Generated from SinkedSea.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SinkedSeaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SinkedSeaParser.
 */
class  SinkedSeaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterParameters(SinkedSeaParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(SinkedSeaParser::ParametersContext *ctx) = 0;

  virtual void enterArguments(SinkedSeaParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(SinkedSeaParser::ArgumentsContext *ctx) = 0;

  virtual void enterExpression(SinkedSeaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SinkedSeaParser::ExpressionContext *ctx) = 0;

  virtual void enterNewChan(SinkedSeaParser::NewChanContext *ctx) = 0;
  virtual void exitNewChan(SinkedSeaParser::NewChanContext *ctx) = 0;

  virtual void enterChanRead(SinkedSeaParser::ChanReadContext *ctx) = 0;
  virtual void exitChanRead(SinkedSeaParser::ChanReadContext *ctx) = 0;

  virtual void enterCommand(SinkedSeaParser::CommandContext *ctx) = 0;
  virtual void exitCommand(SinkedSeaParser::CommandContext *ctx) = 0;

  virtual void enterGlobalAssignment(SinkedSeaParser::GlobalAssignmentContext *ctx) = 0;
  virtual void exitGlobalAssignment(SinkedSeaParser::GlobalAssignmentContext *ctx) = 0;

  virtual void enterLocalAssignment(SinkedSeaParser::LocalAssignmentContext *ctx) = 0;
  virtual void exitLocalAssignment(SinkedSeaParser::LocalAssignmentContext *ctx) = 0;

  virtual void enterAssignment(SinkedSeaParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(SinkedSeaParser::AssignmentContext *ctx) = 0;

  virtual void enterDeclaration(SinkedSeaParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(SinkedSeaParser::DeclarationContext *ctx) = 0;

  virtual void enterCom1(SinkedSeaParser::Com1Context *ctx) = 0;
  virtual void exitCom1(SinkedSeaParser::Com1Context *ctx) = 0;

  virtual void enterCom2(SinkedSeaParser::Com2Context *ctx) = 0;
  virtual void exitCom2(SinkedSeaParser::Com2Context *ctx) = 0;

  virtual void enterIf2(SinkedSeaParser::If2Context *ctx) = 0;
  virtual void exitIf2(SinkedSeaParser::If2Context *ctx) = 0;

  virtual void enterIf1(SinkedSeaParser::If1Context *ctx) = 0;
  virtual void exitIf1(SinkedSeaParser::If1Context *ctx) = 0;

  virtual void enterReturnE(SinkedSeaParser::ReturnEContext *ctx) = 0;
  virtual void exitReturnE(SinkedSeaParser::ReturnEContext *ctx) = 0;

  virtual void enterPrint(SinkedSeaParser::PrintContext *ctx) = 0;
  virtual void exitPrint(SinkedSeaParser::PrintContext *ctx) = 0;

  virtual void enterThread(SinkedSeaParser::ThreadContext *ctx) = 0;
  virtual void exitThread(SinkedSeaParser::ThreadContext *ctx) = 0;

  virtual void enterChanAssignment(SinkedSeaParser::ChanAssignmentContext *ctx) = 0;
  virtual void exitChanAssignment(SinkedSeaParser::ChanAssignmentContext *ctx) = 0;

  virtual void enterWhileLoop(SinkedSeaParser::WhileLoopContext *ctx) = 0;
  virtual void exitWhileLoop(SinkedSeaParser::WhileLoopContext *ctx) = 0;

  virtual void enterFile(SinkedSeaParser::FileContext *ctx) = 0;
  virtual void exitFile(SinkedSeaParser::FileContext *ctx) = 0;


};

