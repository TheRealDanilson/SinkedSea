
// Generated from SinkedSea.g4 by ANTLR 4.8


#include "SinkedSeaListener.h"
#include "SinkedSeaVisitor.h"

#include "SinkedSeaParser.h"


using namespace antlrcpp;
using namespace antlr4;

SinkedSeaParser::SinkedSeaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SinkedSeaParser::~SinkedSeaParser() {
  delete _interpreter;
}

std::string SinkedSeaParser::getGrammarFileName() const {
  return "SinkedSea.g4";
}

const std::vector<std::string>& SinkedSeaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SinkedSeaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ParametersContext ------------------------------------------------------------------

SinkedSeaParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SinkedSeaParser::ParametersContext::NAME() {
  return getTokens(SinkedSeaParser::NAME);
}

tree::TerminalNode* SinkedSeaParser::ParametersContext::NAME(size_t i) {
  return getToken(SinkedSeaParser::NAME, i);
}


size_t SinkedSeaParser::ParametersContext::getRuleIndex() const {
  return SinkedSeaParser::RuleParameters;
}

void SinkedSeaParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void SinkedSeaParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}


antlrcpp::Any SinkedSeaParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::ParametersContext* SinkedSeaParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 0, SinkedSeaParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SinkedSeaParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        match(SinkedSeaParser::NAME);
        setState(45);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SinkedSeaParser::T__0) {
          setState(41);
          match(SinkedSeaParser::T__0);
          setState(42);
          match(SinkedSeaParser::NAME);
          setState(47);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case SinkedSeaParser::T__2: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

SinkedSeaParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SinkedSeaParser::ExpressionContext *> SinkedSeaParser::ArgumentsContext::expression() {
  return getRuleContexts<SinkedSeaParser::ExpressionContext>();
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::ArgumentsContext::expression(size_t i) {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(i);
}


size_t SinkedSeaParser::ArgumentsContext::getRuleIndex() const {
  return SinkedSeaParser::RuleArguments;
}

void SinkedSeaParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void SinkedSeaParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}


antlrcpp::Any SinkedSeaParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::ArgumentsContext* SinkedSeaParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 2, SinkedSeaParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SinkedSeaParser::T__3:
      case SinkedSeaParser::T__5:
      case SinkedSeaParser::BOOL:
      case SinkedSeaParser::NAME:
      case SinkedSeaParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(51);
        expression(0);
        setState(56);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SinkedSeaParser::T__0) {
          setState(52);
          match(SinkedSeaParser::T__0);
          setState(53);
          expression(0);
          setState(58);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case SinkedSeaParser::T__2: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SinkedSeaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::BOOL() {
  return getToken(SinkedSeaParser::BOOL, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::INT() {
  return getToken(SinkedSeaParser::INT, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::NAME() {
  return getToken(SinkedSeaParser::NAME, 0);
}

SinkedSeaParser::ArgumentsContext* SinkedSeaParser::ExpressionContext::arguments() {
  return getRuleContext<SinkedSeaParser::ArgumentsContext>(0);
}

SinkedSeaParser::NewChanContext* SinkedSeaParser::ExpressionContext::newChan() {
  return getRuleContext<SinkedSeaParser::NewChanContext>(0);
}

SinkedSeaParser::ChanReadContext* SinkedSeaParser::ExpressionContext::chanRead() {
  return getRuleContext<SinkedSeaParser::ChanReadContext>(0);
}

std::vector<SinkedSeaParser::ExpressionContext *> SinkedSeaParser::ExpressionContext::expression() {
  return getRuleContexts<SinkedSeaParser::ExpressionContext>();
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(i);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::MULT() {
  return getToken(SinkedSeaParser::MULT, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::ADD() {
  return getToken(SinkedSeaParser::ADD, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::SUB() {
  return getToken(SinkedSeaParser::SUB, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::LT() {
  return getToken(SinkedSeaParser::LT, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::EQ() {
  return getToken(SinkedSeaParser::EQ, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::AND() {
  return getToken(SinkedSeaParser::AND, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::OR() {
  return getToken(SinkedSeaParser::OR, 0);
}


size_t SinkedSeaParser::ExpressionContext::getRuleIndex() const {
  return SinkedSeaParser::RuleExpression;
}

void SinkedSeaParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void SinkedSeaParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any SinkedSeaParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


SinkedSeaParser::ExpressionContext* SinkedSeaParser::expression() {
   return expression(0);
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SinkedSeaParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SinkedSeaParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, SinkedSeaParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(63);
      match(SinkedSeaParser::BOOL);
      break;
    }

    case 2: {
      setState(64);
      match(SinkedSeaParser::INT);
      break;
    }

    case 3: {
      setState(65);
      match(SinkedSeaParser::NAME);
      break;
    }

    case 4: {
      setState(66);
      match(SinkedSeaParser::NAME);
      setState(67);
      match(SinkedSeaParser::T__1);
      setState(68);
      arguments();
      setState(69);
      match(SinkedSeaParser::T__2);
      break;
    }

    case 5: {
      setState(71);
      newChan();
      break;
    }

    case 6: {
      setState(72);
      chanRead();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(95);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(93);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(75);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(76);
          match(SinkedSeaParser::MULT);
          setState(77);
          expression(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(78);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(79);
          dynamic_cast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SinkedSeaParser::ADD

          || _la == SinkedSeaParser::SUB)) {
            dynamic_cast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(80);
          expression(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(81);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(82);
          match(SinkedSeaParser::LT);
          setState(83);
          expression(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(84);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(85);
          match(SinkedSeaParser::EQ);
          setState(86);
          expression(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(87);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(88);
          match(SinkedSeaParser::AND);
          setState(89);
          expression(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(90);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(91);
          match(SinkedSeaParser::OR);
          setState(92);
          expression(4);
          break;
        }

        } 
      }
      setState(97);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewChanContext ------------------------------------------------------------------

SinkedSeaParser::NewChanContext::NewChanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SinkedSeaParser::NewChanContext::getRuleIndex() const {
  return SinkedSeaParser::RuleNewChan;
}

void SinkedSeaParser::NewChanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewChan(this);
}

void SinkedSeaParser::NewChanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewChan(this);
}


antlrcpp::Any SinkedSeaParser::NewChanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitNewChan(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::NewChanContext* SinkedSeaParser::newChan() {
  NewChanContext *_localctx = _tracker.createInstance<NewChanContext>(_ctx, getState());
  enterRule(_localctx, 6, SinkedSeaParser::RuleNewChan);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(SinkedSeaParser::T__3);
    setState(99);
    match(SinkedSeaParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChanReadContext ------------------------------------------------------------------

SinkedSeaParser::ChanReadContext::ChanReadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::ChanReadContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::ChanReadContext::getRuleIndex() const {
  return SinkedSeaParser::RuleChanRead;
}

void SinkedSeaParser::ChanReadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChanRead(this);
}

void SinkedSeaParser::ChanReadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChanRead(this);
}


antlrcpp::Any SinkedSeaParser::ChanReadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitChanRead(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::ChanReadContext* SinkedSeaParser::chanRead() {
  ChanReadContext *_localctx = _tracker.createInstance<ChanReadContext>(_ctx, getState());
  enterRule(_localctx, 8, SinkedSeaParser::RuleChanRead);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(SinkedSeaParser::T__5);
    setState(102);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

SinkedSeaParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::GlobalAssignmentContext* SinkedSeaParser::CommandContext::globalAssignment() {
  return getRuleContext<SinkedSeaParser::GlobalAssignmentContext>(0);
}

SinkedSeaParser::LocalAssignmentContext* SinkedSeaParser::CommandContext::localAssignment() {
  return getRuleContext<SinkedSeaParser::LocalAssignmentContext>(0);
}

SinkedSeaParser::AssignmentContext* SinkedSeaParser::CommandContext::assignment() {
  return getRuleContext<SinkedSeaParser::AssignmentContext>(0);
}

SinkedSeaParser::DeclarationContext* SinkedSeaParser::CommandContext::declaration() {
  return getRuleContext<SinkedSeaParser::DeclarationContext>(0);
}

SinkedSeaParser::If2Context* SinkedSeaParser::CommandContext::if2() {
  return getRuleContext<SinkedSeaParser::If2Context>(0);
}

SinkedSeaParser::If1Context* SinkedSeaParser::CommandContext::if1() {
  return getRuleContext<SinkedSeaParser::If1Context>(0);
}

SinkedSeaParser::ReturnEContext* SinkedSeaParser::CommandContext::returnE() {
  return getRuleContext<SinkedSeaParser::ReturnEContext>(0);
}

SinkedSeaParser::PrintContext* SinkedSeaParser::CommandContext::print() {
  return getRuleContext<SinkedSeaParser::PrintContext>(0);
}

SinkedSeaParser::WhileLoopContext* SinkedSeaParser::CommandContext::whileLoop() {
  return getRuleContext<SinkedSeaParser::WhileLoopContext>(0);
}

SinkedSeaParser::ThreadContext* SinkedSeaParser::CommandContext::thread() {
  return getRuleContext<SinkedSeaParser::ThreadContext>(0);
}

SinkedSeaParser::ChanAssignmentContext* SinkedSeaParser::CommandContext::chanAssignment() {
  return getRuleContext<SinkedSeaParser::ChanAssignmentContext>(0);
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::CommandContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::CommandContext::getRuleIndex() const {
  return SinkedSeaParser::RuleCommand;
}

void SinkedSeaParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void SinkedSeaParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}


antlrcpp::Any SinkedSeaParser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::CommandContext* SinkedSeaParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 10, SinkedSeaParser::RuleCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      globalAssignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      localAssignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(106);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(107);
      declaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(108);
      if2();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(109);
      if1();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(110);
      returnE();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(111);
      print();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(112);
      whileLoop();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(113);
      thread();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(114);
      chanAssignment();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(115);
      expression(0);
      setState(116);
      match(SinkedSeaParser::T__6);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalAssignmentContext ------------------------------------------------------------------

SinkedSeaParser::GlobalAssignmentContext::GlobalAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SinkedSeaParser::GlobalAssignmentContext::NAME() {
  return getToken(SinkedSeaParser::NAME, 0);
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::GlobalAssignmentContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::GlobalAssignmentContext::getRuleIndex() const {
  return SinkedSeaParser::RuleGlobalAssignment;
}

void SinkedSeaParser::GlobalAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalAssignment(this);
}

void SinkedSeaParser::GlobalAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalAssignment(this);
}


antlrcpp::Any SinkedSeaParser::GlobalAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitGlobalAssignment(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::GlobalAssignmentContext* SinkedSeaParser::globalAssignment() {
  GlobalAssignmentContext *_localctx = _tracker.createInstance<GlobalAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 12, SinkedSeaParser::RuleGlobalAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(SinkedSeaParser::T__7);
    setState(121);
    match(SinkedSeaParser::NAME);
    setState(122);
    match(SinkedSeaParser::T__8);
    setState(123);
    expression(0);
    setState(124);
    match(SinkedSeaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalAssignmentContext ------------------------------------------------------------------

SinkedSeaParser::LocalAssignmentContext::LocalAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SinkedSeaParser::LocalAssignmentContext::NAME() {
  return getToken(SinkedSeaParser::NAME, 0);
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::LocalAssignmentContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::LocalAssignmentContext::getRuleIndex() const {
  return SinkedSeaParser::RuleLocalAssignment;
}

void SinkedSeaParser::LocalAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalAssignment(this);
}

void SinkedSeaParser::LocalAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalAssignment(this);
}


antlrcpp::Any SinkedSeaParser::LocalAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitLocalAssignment(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::LocalAssignmentContext* SinkedSeaParser::localAssignment() {
  LocalAssignmentContext *_localctx = _tracker.createInstance<LocalAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 14, SinkedSeaParser::RuleLocalAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(SinkedSeaParser::T__9);
    setState(127);
    match(SinkedSeaParser::NAME);
    setState(128);
    match(SinkedSeaParser::T__8);
    setState(129);
    expression(0);
    setState(130);
    match(SinkedSeaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

SinkedSeaParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SinkedSeaParser::AssignmentContext::NAME() {
  return getToken(SinkedSeaParser::NAME, 0);
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::AssignmentContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::AssignmentContext::getRuleIndex() const {
  return SinkedSeaParser::RuleAssignment;
}

void SinkedSeaParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void SinkedSeaParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any SinkedSeaParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::AssignmentContext* SinkedSeaParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 16, SinkedSeaParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(SinkedSeaParser::NAME);
    setState(133);
    match(SinkedSeaParser::T__8);
    setState(134);
    expression(0);
    setState(135);
    match(SinkedSeaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

SinkedSeaParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SinkedSeaParser::DeclarationContext::NAME() {
  return getToken(SinkedSeaParser::NAME, 0);
}

SinkedSeaParser::ParametersContext* SinkedSeaParser::DeclarationContext::parameters() {
  return getRuleContext<SinkedSeaParser::ParametersContext>(0);
}

std::vector<SinkedSeaParser::CommandContext *> SinkedSeaParser::DeclarationContext::command() {
  return getRuleContexts<SinkedSeaParser::CommandContext>();
}

SinkedSeaParser::CommandContext* SinkedSeaParser::DeclarationContext::command(size_t i) {
  return getRuleContext<SinkedSeaParser::CommandContext>(i);
}


size_t SinkedSeaParser::DeclarationContext::getRuleIndex() const {
  return SinkedSeaParser::RuleDeclaration;
}

void SinkedSeaParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void SinkedSeaParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any SinkedSeaParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::DeclarationContext* SinkedSeaParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, SinkedSeaParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(SinkedSeaParser::NAME);
    setState(138);
    match(SinkedSeaParser::T__1);
    setState(139);
    parameters();
    setState(140);
    match(SinkedSeaParser::T__2);
    setState(141);
    match(SinkedSeaParser::T__10);
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__3)
      | (1ULL << SinkedSeaParser::T__5)
      | (1ULL << SinkedSeaParser::T__7)
      | (1ULL << SinkedSeaParser::T__9)
      | (1ULL << SinkedSeaParser::T__12)
      | (1ULL << SinkedSeaParser::T__14)
      | (1ULL << SinkedSeaParser::T__15)
      | (1ULL << SinkedSeaParser::T__16)
      | (1ULL << SinkedSeaParser::T__18)
      | (1ULL << SinkedSeaParser::BOOL)
      | (1ULL << SinkedSeaParser::NAME)
      | (1ULL << SinkedSeaParser::INT))) != 0)) {
      setState(142);
      command();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
    match(SinkedSeaParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Com1Context ------------------------------------------------------------------

SinkedSeaParser::Com1Context::Com1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SinkedSeaParser::CommandContext *> SinkedSeaParser::Com1Context::command() {
  return getRuleContexts<SinkedSeaParser::CommandContext>();
}

SinkedSeaParser::CommandContext* SinkedSeaParser::Com1Context::command(size_t i) {
  return getRuleContext<SinkedSeaParser::CommandContext>(i);
}


size_t SinkedSeaParser::Com1Context::getRuleIndex() const {
  return SinkedSeaParser::RuleCom1;
}

void SinkedSeaParser::Com1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCom1(this);
}

void SinkedSeaParser::Com1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCom1(this);
}


antlrcpp::Any SinkedSeaParser::Com1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitCom1(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::Com1Context* SinkedSeaParser::com1() {
  Com1Context *_localctx = _tracker.createInstance<Com1Context>(_ctx, getState());
  enterRule(_localctx, 20, SinkedSeaParser::RuleCom1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__3)
      | (1ULL << SinkedSeaParser::T__5)
      | (1ULL << SinkedSeaParser::T__7)
      | (1ULL << SinkedSeaParser::T__9)
      | (1ULL << SinkedSeaParser::T__12)
      | (1ULL << SinkedSeaParser::T__14)
      | (1ULL << SinkedSeaParser::T__15)
      | (1ULL << SinkedSeaParser::T__16)
      | (1ULL << SinkedSeaParser::T__18)
      | (1ULL << SinkedSeaParser::BOOL)
      | (1ULL << SinkedSeaParser::NAME)
      | (1ULL << SinkedSeaParser::INT))) != 0)) {
      setState(150);
      command();
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Com2Context ------------------------------------------------------------------

SinkedSeaParser::Com2Context::Com2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SinkedSeaParser::CommandContext *> SinkedSeaParser::Com2Context::command() {
  return getRuleContexts<SinkedSeaParser::CommandContext>();
}

SinkedSeaParser::CommandContext* SinkedSeaParser::Com2Context::command(size_t i) {
  return getRuleContext<SinkedSeaParser::CommandContext>(i);
}


size_t SinkedSeaParser::Com2Context::getRuleIndex() const {
  return SinkedSeaParser::RuleCom2;
}

void SinkedSeaParser::Com2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCom2(this);
}

void SinkedSeaParser::Com2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCom2(this);
}


antlrcpp::Any SinkedSeaParser::Com2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitCom2(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::Com2Context* SinkedSeaParser::com2() {
  Com2Context *_localctx = _tracker.createInstance<Com2Context>(_ctx, getState());
  enterRule(_localctx, 22, SinkedSeaParser::RuleCom2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__3)
      | (1ULL << SinkedSeaParser::T__5)
      | (1ULL << SinkedSeaParser::T__7)
      | (1ULL << SinkedSeaParser::T__9)
      | (1ULL << SinkedSeaParser::T__12)
      | (1ULL << SinkedSeaParser::T__14)
      | (1ULL << SinkedSeaParser::T__15)
      | (1ULL << SinkedSeaParser::T__16)
      | (1ULL << SinkedSeaParser::T__18)
      | (1ULL << SinkedSeaParser::BOOL)
      | (1ULL << SinkedSeaParser::NAME)
      | (1ULL << SinkedSeaParser::INT))) != 0)) {
      setState(156);
      command();
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If2Context ------------------------------------------------------------------

SinkedSeaParser::If2Context::If2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::If2Context::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}

SinkedSeaParser::Com1Context* SinkedSeaParser::If2Context::com1() {
  return getRuleContext<SinkedSeaParser::Com1Context>(0);
}

SinkedSeaParser::Com2Context* SinkedSeaParser::If2Context::com2() {
  return getRuleContext<SinkedSeaParser::Com2Context>(0);
}


size_t SinkedSeaParser::If2Context::getRuleIndex() const {
  return SinkedSeaParser::RuleIf2;
}

void SinkedSeaParser::If2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf2(this);
}

void SinkedSeaParser::If2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf2(this);
}


antlrcpp::Any SinkedSeaParser::If2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitIf2(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::If2Context* SinkedSeaParser::if2() {
  If2Context *_localctx = _tracker.createInstance<If2Context>(_ctx, getState());
  enterRule(_localctx, 24, SinkedSeaParser::RuleIf2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(SinkedSeaParser::T__12);
    setState(163);
    match(SinkedSeaParser::T__1);
    setState(164);
    expression(0);
    setState(165);
    match(SinkedSeaParser::T__2);
    setState(166);
    match(SinkedSeaParser::T__10);
    setState(167);
    com1();
    setState(168);
    match(SinkedSeaParser::T__11);
    setState(169);
    match(SinkedSeaParser::T__13);
    setState(170);
    match(SinkedSeaParser::T__10);
    setState(171);
    com2();
    setState(172);
    match(SinkedSeaParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If1Context ------------------------------------------------------------------

SinkedSeaParser::If1Context::If1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::If1Context::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}

SinkedSeaParser::Com1Context* SinkedSeaParser::If1Context::com1() {
  return getRuleContext<SinkedSeaParser::Com1Context>(0);
}


size_t SinkedSeaParser::If1Context::getRuleIndex() const {
  return SinkedSeaParser::RuleIf1;
}

void SinkedSeaParser::If1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf1(this);
}

void SinkedSeaParser::If1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf1(this);
}


antlrcpp::Any SinkedSeaParser::If1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitIf1(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::If1Context* SinkedSeaParser::if1() {
  If1Context *_localctx = _tracker.createInstance<If1Context>(_ctx, getState());
  enterRule(_localctx, 26, SinkedSeaParser::RuleIf1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(SinkedSeaParser::T__12);
    setState(175);
    match(SinkedSeaParser::T__1);
    setState(176);
    expression(0);
    setState(177);
    match(SinkedSeaParser::T__2);
    setState(178);
    match(SinkedSeaParser::T__10);
    setState(179);
    com1();
    setState(180);
    match(SinkedSeaParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnEContext ------------------------------------------------------------------

SinkedSeaParser::ReturnEContext::ReturnEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::ReturnEContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::ReturnEContext::getRuleIndex() const {
  return SinkedSeaParser::RuleReturnE;
}

void SinkedSeaParser::ReturnEContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnE(this);
}

void SinkedSeaParser::ReturnEContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnE(this);
}


antlrcpp::Any SinkedSeaParser::ReturnEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitReturnE(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::ReturnEContext* SinkedSeaParser::returnE() {
  ReturnEContext *_localctx = _tracker.createInstance<ReturnEContext>(_ctx, getState());
  enterRule(_localctx, 28, SinkedSeaParser::RuleReturnE);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(SinkedSeaParser::T__14);
    setState(183);
    expression(0);
    setState(184);
    match(SinkedSeaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

SinkedSeaParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::PrintContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::PrintContext::getRuleIndex() const {
  return SinkedSeaParser::RulePrint;
}

void SinkedSeaParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void SinkedSeaParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


antlrcpp::Any SinkedSeaParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::PrintContext* SinkedSeaParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 30, SinkedSeaParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(SinkedSeaParser::T__15);
    setState(187);
    match(SinkedSeaParser::T__1);
    setState(188);
    expression(0);
    setState(189);
    match(SinkedSeaParser::T__2);
    setState(190);
    match(SinkedSeaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThreadContext ------------------------------------------------------------------

SinkedSeaParser::ThreadContext::ThreadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::ThreadContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}


size_t SinkedSeaParser::ThreadContext::getRuleIndex() const {
  return SinkedSeaParser::RuleThread;
}

void SinkedSeaParser::ThreadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThread(this);
}

void SinkedSeaParser::ThreadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThread(this);
}


antlrcpp::Any SinkedSeaParser::ThreadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitThread(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::ThreadContext* SinkedSeaParser::thread() {
  ThreadContext *_localctx = _tracker.createInstance<ThreadContext>(_ctx, getState());
  enterRule(_localctx, 32, SinkedSeaParser::RuleThread);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(SinkedSeaParser::T__16);
    setState(193);
    match(SinkedSeaParser::T__1);
    setState(194);
    expression(0);
    setState(195);
    match(SinkedSeaParser::T__2);
    setState(196);
    match(SinkedSeaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChanAssignmentContext ------------------------------------------------------------------

SinkedSeaParser::ChanAssignmentContext::ChanAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SinkedSeaParser::ExpressionContext *> SinkedSeaParser::ChanAssignmentContext::expression() {
  return getRuleContexts<SinkedSeaParser::ExpressionContext>();
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::ChanAssignmentContext::expression(size_t i) {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(i);
}


size_t SinkedSeaParser::ChanAssignmentContext::getRuleIndex() const {
  return SinkedSeaParser::RuleChanAssignment;
}

void SinkedSeaParser::ChanAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChanAssignment(this);
}

void SinkedSeaParser::ChanAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChanAssignment(this);
}


antlrcpp::Any SinkedSeaParser::ChanAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitChanAssignment(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::ChanAssignmentContext* SinkedSeaParser::chanAssignment() {
  ChanAssignmentContext *_localctx = _tracker.createInstance<ChanAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 34, SinkedSeaParser::RuleChanAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    expression(0);
    setState(199);
    match(SinkedSeaParser::T__17);
    setState(200);
    expression(0);
    setState(201);
    match(SinkedSeaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

SinkedSeaParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::WhileLoopContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}

std::vector<SinkedSeaParser::CommandContext *> SinkedSeaParser::WhileLoopContext::command() {
  return getRuleContexts<SinkedSeaParser::CommandContext>();
}

SinkedSeaParser::CommandContext* SinkedSeaParser::WhileLoopContext::command(size_t i) {
  return getRuleContext<SinkedSeaParser::CommandContext>(i);
}


size_t SinkedSeaParser::WhileLoopContext::getRuleIndex() const {
  return SinkedSeaParser::RuleWhileLoop;
}

void SinkedSeaParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}

void SinkedSeaParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}


antlrcpp::Any SinkedSeaParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::WhileLoopContext* SinkedSeaParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 36, SinkedSeaParser::RuleWhileLoop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(SinkedSeaParser::T__18);
    setState(204);
    match(SinkedSeaParser::T__1);
    setState(205);
    expression(0);
    setState(206);
    match(SinkedSeaParser::T__2);
    setState(207);
    match(SinkedSeaParser::T__10);
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__3)
      | (1ULL << SinkedSeaParser::T__5)
      | (1ULL << SinkedSeaParser::T__7)
      | (1ULL << SinkedSeaParser::T__9)
      | (1ULL << SinkedSeaParser::T__12)
      | (1ULL << SinkedSeaParser::T__14)
      | (1ULL << SinkedSeaParser::T__15)
      | (1ULL << SinkedSeaParser::T__16)
      | (1ULL << SinkedSeaParser::T__18)
      | (1ULL << SinkedSeaParser::BOOL)
      | (1ULL << SinkedSeaParser::NAME)
      | (1ULL << SinkedSeaParser::INT))) != 0)) {
      setState(208);
      command();
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(214);
    match(SinkedSeaParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileContext ------------------------------------------------------------------

SinkedSeaParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SinkedSeaParser::FileContext::EOF() {
  return getToken(SinkedSeaParser::EOF, 0);
}

std::vector<SinkedSeaParser::CommandContext *> SinkedSeaParser::FileContext::command() {
  return getRuleContexts<SinkedSeaParser::CommandContext>();
}

SinkedSeaParser::CommandContext* SinkedSeaParser::FileContext::command(size_t i) {
  return getRuleContext<SinkedSeaParser::CommandContext>(i);
}


size_t SinkedSeaParser::FileContext::getRuleIndex() const {
  return SinkedSeaParser::RuleFile;
}

void SinkedSeaParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void SinkedSeaParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SinkedSeaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


antlrcpp::Any SinkedSeaParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SinkedSeaVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

SinkedSeaParser::FileContext* SinkedSeaParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 38, SinkedSeaParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__3)
      | (1ULL << SinkedSeaParser::T__5)
      | (1ULL << SinkedSeaParser::T__7)
      | (1ULL << SinkedSeaParser::T__9)
      | (1ULL << SinkedSeaParser::T__12)
      | (1ULL << SinkedSeaParser::T__14)
      | (1ULL << SinkedSeaParser::T__15)
      | (1ULL << SinkedSeaParser::T__16)
      | (1ULL << SinkedSeaParser::T__18)
      | (1ULL << SinkedSeaParser::BOOL)
      | (1ULL << SinkedSeaParser::NAME)
      | (1ULL << SinkedSeaParser::INT))) != 0)) {
      setState(216);
      command();
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(222);
    match(SinkedSeaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SinkedSeaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SinkedSeaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SinkedSeaParser::_decisionToDFA;
atn::PredictionContextCache SinkedSeaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SinkedSeaParser::_atn;
std::vector<uint16_t> SinkedSeaParser::_serializedATN;

std::vector<std::string> SinkedSeaParser::_ruleNames = {
  "parameters", "arguments", "expression", "newChan", "chanRead", "command", 
  "globalAssignment", "localAssignment", "assignment", "declaration", "com1", 
  "com2", "if2", "if1", "returnE", "print", "thread", "chanAssignment", 
  "whileLoop", "file"
};

std::vector<std::string> SinkedSeaParser::_literalNames = {
  "", "','", "'('", "')'", "'new'", "'chan'", "'read'", "';'", "'global'", 
  "'='", "'local'", "'{'", "'}'", "'if'", "'else'", "'return'", "'print'", 
  "'thread'", "'->'", "'while'", "", "", "", "'*'", "'+'", "'-'", "'<'", 
  "'&&'", "'||'", "'=='"
};

std::vector<std::string> SinkedSeaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "BOOL", "NAME", "INT", "MULT", "ADD", "SUB", "LT", "AND", "OR", 
  "EQ", "WS", "LINE_COMMENT"
};

dfa::Vocabulary SinkedSeaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SinkedSeaParser::_tokenNames;

SinkedSeaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x21, 0xe3, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x2e, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x31, 0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x34, 0xa, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x39, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3c, 
    0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3f, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x4c, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0x60, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x63, 0xb, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x79, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x92, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0x95, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x7, 0xc, 0x9a, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x9d, 0xb, 0xc, 0x3, 0xd, 0x7, 0xd, 0xa0, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xa3, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xd4, 0xa, 
    0x14, 0xc, 0x14, 0xe, 0x14, 0xd7, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x7, 0x15, 0xdc, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xdf, 0xb, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x2, 0x3, 0x6, 0x16, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x3, 0x3, 0x2, 0x1a, 0x1b, 0x2, 0xed, 
    0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x64, 0x3, 0x2, 0x2, 0x2, 0xa, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x78, 0x3, 0x2, 0x2, 0x2, 0xe, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x80, 0x3, 0x2, 0x2, 0x2, 0x12, 0x86, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x28, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2f, 0x7, 0x17, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2c, 
    0x2e, 0x7, 0x17, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x34, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x34, 0x3, 0x2, 0x2, 0x2, 0x33, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x3a, 0x5, 0x6, 0x4, 0x2, 0x36, 0x37, 0x7, 0x3, 0x2, 0x2, 0x37, 
    0x39, 0x5, 0x6, 0x4, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x41, 0x8, 0x4, 0x1, 0x2, 0x41, 0x4c, 0x7, 0x16, 0x2, 0x2, 0x42, 
    0x4c, 0x7, 0x18, 0x2, 0x2, 0x43, 0x4c, 0x7, 0x17, 0x2, 0x2, 0x44, 0x45, 
    0x7, 0x17, 0x2, 0x2, 0x45, 0x46, 0x7, 0x4, 0x2, 0x2, 0x46, 0x47, 0x5, 
    0x4, 0x3, 0x2, 0x47, 0x48, 0x7, 0x5, 0x2, 0x2, 0x48, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x4c, 0x5, 0x8, 0x5, 0x2, 0x4a, 0x4c, 0x5, 0xa, 0x6, 
    0x2, 0x4b, 0x40, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0xc, 0xa, 0x2, 0x2, 0x4e, 0x4f, 0x7, 
    0x19, 0x2, 0x2, 0x4f, 0x60, 0x5, 0x6, 0x4, 0xb, 0x50, 0x51, 0xc, 0x9, 
    0x2, 0x2, 0x51, 0x52, 0x9, 0x2, 0x2, 0x2, 0x52, 0x60, 0x5, 0x6, 0x4, 
    0xa, 0x53, 0x54, 0xc, 0x8, 0x2, 0x2, 0x54, 0x55, 0x7, 0x1c, 0x2, 0x2, 
    0x55, 0x60, 0x5, 0x6, 0x4, 0x9, 0x56, 0x57, 0xc, 0x7, 0x2, 0x2, 0x57, 
    0x58, 0x7, 0x1f, 0x2, 0x2, 0x58, 0x60, 0x5, 0x6, 0x4, 0x8, 0x59, 0x5a, 
    0xc, 0x6, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x1d, 0x2, 0x2, 0x5b, 0x60, 0x5, 
    0x6, 0x4, 0x7, 0x5c, 0x5d, 0xc, 0x5, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x1e, 
    0x2, 0x2, 0x5e, 0x60, 0x5, 0x6, 0x4, 0x6, 0x5f, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x6, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x7, 0x2, 0x2, 0x66, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x68, 0x7, 0x8, 0x2, 0x2, 0x68, 0x69, 0x5, 0x6, 0x4, 0x2, 
    0x69, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x79, 0x5, 0xe, 0x8, 0x2, 0x6b, 
    0x79, 0x5, 0x10, 0x9, 0x2, 0x6c, 0x79, 0x5, 0x12, 0xa, 0x2, 0x6d, 0x79, 
    0x5, 0x14, 0xb, 0x2, 0x6e, 0x79, 0x5, 0x1a, 0xe, 0x2, 0x6f, 0x79, 0x5, 
    0x1c, 0xf, 0x2, 0x70, 0x79, 0x5, 0x1e, 0x10, 0x2, 0x71, 0x79, 0x5, 0x20, 
    0x11, 0x2, 0x72, 0x79, 0x5, 0x26, 0x14, 0x2, 0x73, 0x79, 0x5, 0x22, 
    0x12, 0x2, 0x74, 0x79, 0x5, 0x24, 0x13, 0x2, 0x75, 0x76, 0x5, 0x6, 0x4, 
    0x2, 0x76, 0x77, 0x7, 0x9, 0x2, 0x2, 0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x78, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x78, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x78, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x71, 0x3, 0x2, 0x2, 0x2, 0x78, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x73, 0x3, 0x2, 0x2, 0x2, 0x78, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x75, 0x3, 0x2, 0x2, 0x2, 0x79, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7b, 0x7, 0xa, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x17, 0x2, 0x2, 0x7c, 
    0x7d, 0x7, 0xb, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x6, 0x4, 0x2, 0x7e, 0x7f, 
    0x7, 0x9, 0x2, 0x2, 0x7f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 
    0xc, 0x2, 0x2, 0x81, 0x82, 0x7, 0x17, 0x2, 0x2, 0x82, 0x83, 0x7, 0xb, 
    0x2, 0x2, 0x83, 0x84, 0x5, 0x6, 0x4, 0x2, 0x84, 0x85, 0x7, 0x9, 0x2, 
    0x2, 0x85, 0x11, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x17, 0x2, 0x2, 
    0x87, 0x88, 0x7, 0xb, 0x2, 0x2, 0x88, 0x89, 0x5, 0x6, 0x4, 0x2, 0x89, 
    0x8a, 0x7, 0x9, 0x2, 0x2, 0x8a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 
    0x7, 0x17, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x4, 0x2, 0x2, 0x8d, 0x8e, 0x5, 
    0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x5, 0x2, 0x2, 0x8f, 0x93, 0x7, 0xd, 
    0x2, 0x2, 0x90, 0x92, 0x5, 0xc, 0x7, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0xe, 0x2, 0x2, 0x97, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x5, 0xc, 0x7, 0x2, 0x99, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0xc, 0x7, 0x2, 
    0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 
    0xf, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x4, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x6, 
    0x4, 0x2, 0xa7, 0xa8, 0x7, 0x5, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0xd, 0x2, 
    0x2, 0xa9, 0xaa, 0x5, 0x16, 0xc, 0x2, 0xaa, 0xab, 0x7, 0xe, 0x2, 0x2, 
    0xab, 0xac, 0x7, 0x10, 0x2, 0x2, 0xac, 0xad, 0x7, 0xd, 0x2, 0x2, 0xad, 
    0xae, 0x5, 0x18, 0xd, 0x2, 0xae, 0xaf, 0x7, 0xe, 0x2, 0x2, 0xaf, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0xf, 0x2, 0x2, 0xb1, 0xb2, 0x7, 
    0x4, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x6, 0x4, 0x2, 0xb3, 0xb4, 0x7, 0x5, 
    0x2, 0x2, 0xb4, 0xb5, 0x7, 0xd, 0x2, 0x2, 0xb5, 0xb6, 0x5, 0x16, 0xc, 
    0x2, 0xb6, 0xb7, 0x7, 0xe, 0x2, 0x2, 0xb7, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb9, 0x7, 0x11, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x6, 0x4, 0x2, 0xba, 
    0xbb, 0x7, 0x9, 0x2, 0x2, 0xbb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
    0x7, 0x12, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x4, 0x2, 0x2, 0xbe, 0xbf, 0x5, 
    0x6, 0x4, 0x2, 0xbf, 0xc0, 0x7, 0x5, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x9, 
    0x2, 0x2, 0xc1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x13, 0x2, 
    0x2, 0xc3, 0xc4, 0x7, 0x4, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x6, 0x4, 0x2, 
    0xc5, 0xc6, 0x7, 0x5, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x9, 0x2, 0x2, 0xc7, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x6, 0x4, 0x2, 0xc9, 0xca, 
    0x7, 0x14, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x6, 0x4, 0x2, 0xcb, 0xcc, 0x7, 
    0x9, 0x2, 0x2, 0xcc, 0x25, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x15, 
    0x2, 0x2, 0xce, 0xcf, 0x7, 0x4, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x6, 0x4, 
    0x2, 0xd0, 0xd1, 0x7, 0x5, 0x2, 0x2, 0xd1, 0xd5, 0x7, 0xd, 0x2, 0x2, 
    0xd2, 0xd4, 0x5, 0xc, 0x7, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0xe, 0x2, 0x2, 0xd9, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xdc, 0x5, 0xc, 0x7, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x2, 0x2, 0x3, 0xe1, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0xf, 0x2f, 0x33, 0x3a, 0x3e, 0x4b, 0x5f, 0x61, 0x78, 
    0x93, 0x9b, 0xa1, 0xd5, 0xdd, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SinkedSeaParser::Initializer SinkedSeaParser::_init;
