
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

  virtual void enterNewChan(SinkedSeaParser::NewChanContext * /*ctx*/) override { }
  virtual void exitNewChan(SinkedSeaParser::NewChanContext * /*ctx*/) override { }

  virtual void enterChanRead(SinkedSeaParser::ChanReadContext * /*ctx*/) override { }
  virtual void exitChanRead(SinkedSeaParser::ChanReadContext * /*ctx*/) override { }

  virtual void enterCommand(SinkedSeaParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(SinkedSeaParser::CommandContext * /*ctx*/) override { }

  virtual void enterGlobalAssignment(SinkedSeaParser::GlobalAssignmentContext * /*ctx*/) override { }
  virtual void exitGlobalAssignment(SinkedSeaParser::GlobalAssignmentContext * /*ctx*/) override { }

  virtual void enterLocalAssignment(SinkedSeaParser::LocalAssignmentContext * /*ctx*/) override { }
  virtual void exitLocalAssignment(SinkedSeaParser::LocalAssignmentContext * /*ctx*/) override { }

  virtual void enterAssignment(SinkedSeaParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(SinkedSeaParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterDeclaration(SinkedSeaParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(SinkedSeaParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterCom1(SinkedSeaParser::Com1Context * /*ctx*/) override { }
  virtual void exitCom1(SinkedSeaParser::Com1Context * /*ctx*/) override { }

  virtual void enterCom2(SinkedSeaParser::Com2Context * /*ctx*/) override { }
  virtual void exitCom2(SinkedSeaParser::Com2Context * /*ctx*/) override { }

  virtual void enterIf2(SinkedSeaParser::If2Context * /*ctx*/) override { }
  virtual void exitIf2(SinkedSeaParser::If2Context * /*ctx*/) override { }

  virtual void enterIf1(SinkedSeaParser::If1Context * /*ctx*/) override { }
  virtual void exitIf1(SinkedSeaParser::If1Context * /*ctx*/) override { }

  virtual void enterReturnE(SinkedSeaParser::ReturnEContext * /*ctx*/) override { }
  virtual void exitReturnE(SinkedSeaParser::ReturnEContext * /*ctx*/) override { }

  virtual void enterPrint(SinkedSeaParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(SinkedSeaParser::PrintContext * /*ctx*/) override { }

  virtual void enterThread(SinkedSeaParser::ThreadContext * /*ctx*/) override { }
  virtual void exitThread(SinkedSeaParser::ThreadContext * /*ctx*/) override { }

  virtual void enterChanAssignment(SinkedSeaParser::ChanAssignmentContext * /*ctx*/) override { }
  virtual void exitChanAssignment(SinkedSeaParser::ChanAssignmentContext * /*ctx*/) override { }

  virtual void enterWhileLoop(SinkedSeaParser::WhileLoopContext * /*ctx*/) override { }
  virtual void exitWhileLoop(SinkedSeaParser::WhileLoopContext * /*ctx*/) override { }

  virtual void enterFile(SinkedSeaParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(SinkedSeaParser::FileContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

