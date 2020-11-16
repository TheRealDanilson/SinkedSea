
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

  virtual void enterCommand(SinkedSeaParser::CommandContext *ctx) = 0;
  virtual void exitCommand(SinkedSeaParser::CommandContext *ctx) = 0;

  virtual void enterFile(SinkedSeaParser::FileContext *ctx) = 0;
  virtual void exitFile(SinkedSeaParser::FileContext *ctx) = 0;


};

