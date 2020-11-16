
// Generated from SinkedSea.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SinkedSeaListener.h"


/**
 * This class provides an empty implementation of SinkedSeaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SinkedSeaBaseListener : public SinkedSeaListener {
public:

  virtual void enterParameters(SinkedSeaParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(SinkedSeaParser::ParametersContext * /*ctx*/) override { }

  virtual void enterArguments(SinkedSeaParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(SinkedSeaParser::ArgumentsContext * /*ctx*/) override { }

  virtual void enterExpression(SinkedSeaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SinkedSeaParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterCommand(SinkedSeaParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(SinkedSeaParser::CommandContext * /*ctx*/) override { }

  virtual void enterFile(SinkedSeaParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(SinkedSeaParser::FileContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

