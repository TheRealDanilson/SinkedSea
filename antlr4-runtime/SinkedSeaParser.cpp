
// Generated from SinkedSea.g4 by ANTLR 4.8


#include "SinkedSeaListener.h"

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

SinkedSeaParser::ParametersContext* SinkedSeaParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 0, SinkedSeaParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    match(SinkedSeaParser::NAME);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SinkedSeaParser::T__0) {
      setState(11);
      match(SinkedSeaParser::T__0);
      setState(12);
      match(SinkedSeaParser::NAME);
      setState(17);
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

SinkedSeaParser::ArgumentsContext* SinkedSeaParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 2, SinkedSeaParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(27);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SinkedSeaParser::NAME:
      case SinkedSeaParser::INT:
      case SinkedSeaParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(18);
        expression(0);
        setState(23);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SinkedSeaParser::T__0) {
          setState(19);
          match(SinkedSeaParser::T__0);
          setState(20);
          expression(0);
          setState(25);
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

tree::TerminalNode* SinkedSeaParser::ExpressionContext::NAME() {
  return getToken(SinkedSeaParser::NAME, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::INT() {
  return getToken(SinkedSeaParser::INT, 0);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::BOOL() {
  return getToken(SinkedSeaParser::BOOL, 0);
}

SinkedSeaParser::ArgumentsContext* SinkedSeaParser::ExpressionContext::arguments() {
  return getRuleContext<SinkedSeaParser::ArgumentsContext>(0);
}

std::vector<SinkedSeaParser::ExpressionContext *> SinkedSeaParser::ExpressionContext::expression() {
  return getRuleContexts<SinkedSeaParser::ExpressionContext>();
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(i);
}

tree::TerminalNode* SinkedSeaParser::ExpressionContext::BOP() {
  return getToken(SinkedSeaParser::BOP, 0);
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

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(30);
      match(SinkedSeaParser::NAME);
      break;
    }

    case 2: {
      setState(31);
      match(SinkedSeaParser::INT);
      break;
    }

    case 3: {
      setState(32);
      match(SinkedSeaParser::BOOL);
      break;
    }

    case 4: {
      setState(33);
      match(SinkedSeaParser::NAME);
      setState(34);
      match(SinkedSeaParser::T__1);
      setState(35);
      arguments();
      setState(36);
      match(SinkedSeaParser::T__2);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(45);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(40);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(41);
        match(SinkedSeaParser::BOP);
        setState(42);
        expression(3); 
      }
      setState(47);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
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

tree::TerminalNode* SinkedSeaParser::CommandContext::NAME() {
  return getToken(SinkedSeaParser::NAME, 0);
}

SinkedSeaParser::ExpressionContext* SinkedSeaParser::CommandContext::expression() {
  return getRuleContext<SinkedSeaParser::ExpressionContext>(0);
}

SinkedSeaParser::ParametersContext* SinkedSeaParser::CommandContext::parameters() {
  return getRuleContext<SinkedSeaParser::ParametersContext>(0);
}

std::vector<SinkedSeaParser::CommandContext *> SinkedSeaParser::CommandContext::command() {
  return getRuleContexts<SinkedSeaParser::CommandContext>();
}

SinkedSeaParser::CommandContext* SinkedSeaParser::CommandContext::command(size_t i) {
  return getRuleContext<SinkedSeaParser::CommandContext>(i);
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

SinkedSeaParser::CommandContext* SinkedSeaParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 6, SinkedSeaParser::RuleCommand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(48);
      match(SinkedSeaParser::NAME);
      setState(49);
      match(SinkedSeaParser::T__3);
      setState(50);
      expression(0);
      setState(51);
      match(SinkedSeaParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      match(SinkedSeaParser::NAME);
      setState(54);
      match(SinkedSeaParser::T__1);
      setState(55);
      parameters();
      setState(56);
      match(SinkedSeaParser::T__2);
      setState(57);
      match(SinkedSeaParser::T__5);
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__7)
        | (1ULL << SinkedSeaParser::T__9)
        | (1ULL << SinkedSeaParser::T__10)
        | (1ULL << SinkedSeaParser::NAME))) != 0)) {
        setState(58);
        command();
        setState(63);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(64);
      match(SinkedSeaParser::T__6);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(66);
      match(SinkedSeaParser::T__7);
      setState(67);
      match(SinkedSeaParser::T__1);
      setState(68);
      expression(0);
      setState(69);
      match(SinkedSeaParser::T__2);
      setState(70);
      match(SinkedSeaParser::T__5);
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__7)
        | (1ULL << SinkedSeaParser::T__9)
        | (1ULL << SinkedSeaParser::T__10)
        | (1ULL << SinkedSeaParser::NAME))) != 0)) {
        setState(71);
        command();
        setState(76);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(77);
      match(SinkedSeaParser::T__6);
      setState(78);
      match(SinkedSeaParser::T__8);
      setState(79);
      match(SinkedSeaParser::T__5);
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__7)
        | (1ULL << SinkedSeaParser::T__9)
        | (1ULL << SinkedSeaParser::T__10)
        | (1ULL << SinkedSeaParser::NAME))) != 0)) {
        setState(80);
        command();
        setState(85);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(86);
      match(SinkedSeaParser::T__6);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(88);
      match(SinkedSeaParser::T__7);
      setState(89);
      match(SinkedSeaParser::T__1);
      setState(90);
      expression(0);
      setState(91);
      match(SinkedSeaParser::T__2);
      setState(92);
      match(SinkedSeaParser::T__5);
      setState(96);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__7)
        | (1ULL << SinkedSeaParser::T__9)
        | (1ULL << SinkedSeaParser::T__10)
        | (1ULL << SinkedSeaParser::NAME))) != 0)) {
        setState(93);
        command();
        setState(98);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(99);
      match(SinkedSeaParser::T__6);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(101);
      match(SinkedSeaParser::T__9);
      setState(102);
      expression(0);
      setState(103);
      match(SinkedSeaParser::T__4);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(105);
      match(SinkedSeaParser::T__9);
      setState(106);
      match(SinkedSeaParser::T__4);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(107);
      match(SinkedSeaParser::T__10);
      setState(108);
      match(SinkedSeaParser::T__1);
      setState(109);
      expression(0);
      setState(110);
      match(SinkedSeaParser::T__2);
      setState(111);
      match(SinkedSeaParser::T__4);
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

SinkedSeaParser::FileContext* SinkedSeaParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 8, SinkedSeaParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SinkedSeaParser::T__7)
      | (1ULL << SinkedSeaParser::T__9)
      | (1ULL << SinkedSeaParser::T__10)
      | (1ULL << SinkedSeaParser::NAME))) != 0)) {
      setState(115);
      command();
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(121);
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
    case 0: return precpred(_ctx, 2);

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
  "parameters", "arguments", "expression", "command", "file"
};

std::vector<std::string> SinkedSeaParser::_literalNames = {
  "", "','", "'('", "')'", "'='", "';'", "'{'", "'}'", "'if'", "'else'", 
  "'return'", "'print'"
};

std::vector<std::string> SinkedSeaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "NAME", "INT", "BOOL", 
  "BOP", "WS"
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
    0x3, 0x12, 0x7e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x10, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x13, 0xb, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x18, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x1b, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1e, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x29, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x2e, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x31, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x3e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x41, 0xb, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x4b, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x4e, 0xb, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x54, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x57, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x61, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x64, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x74, 0xa, 0x5, 0x3, 0x6, 
    0x7, 0x6, 0x77, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x7a, 0xb, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x2, 0x3, 0x6, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 
    0x2, 0x2, 0x8a, 0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x28, 0x3, 0x2, 0x2, 0x2, 0x8, 0x73, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0xc, 0x11, 0x7, 0xe, 0x2, 0x2, 0xd, 0xe, 0x7, 
    0x3, 0x2, 0x2, 0xe, 0x10, 0x7, 0xe, 0x2, 0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x3, 0x3, 0x2, 0x2, 0x2, 0x13, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x14, 0x19, 0x5, 0x6, 0x4, 0x2, 0x15, 0x16, 
    0x7, 0x3, 0x2, 0x2, 0x16, 0x18, 0x5, 0x6, 0x4, 0x2, 0x17, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1e, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x14, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x8, 0x4, 0x1, 0x2, 0x20, 0x29, 
    0x7, 0xe, 0x2, 0x2, 0x21, 0x29, 0x7, 0xf, 0x2, 0x2, 0x22, 0x29, 0x7, 
    0x10, 0x2, 0x2, 0x23, 0x24, 0x7, 0xe, 0x2, 0x2, 0x24, 0x25, 0x7, 0x4, 
    0x2, 0x2, 0x25, 0x26, 0x5, 0x4, 0x3, 0x2, 0x26, 0x27, 0x7, 0x5, 0x2, 
    0x2, 0x27, 0x29, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x21, 0x3, 0x2, 0x2, 0x2, 0x28, 0x22, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
    0xc, 0x4, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x11, 0x2, 0x2, 0x2c, 0x2e, 0x5, 
    0x6, 0x4, 0x5, 0x2d, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x33, 0x7, 0xe, 0x2, 0x2, 0x33, 0x34, 0x7, 0x6, 0x2, 0x2, 0x34, 
    0x35, 0x5, 0x6, 0x4, 0x2, 0x35, 0x36, 0x7, 0x7, 0x2, 0x2, 0x36, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x7, 0xe, 0x2, 0x2, 0x38, 0x39, 0x7, 
    0x4, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x5, 
    0x2, 0x2, 0x3b, 0x3f, 0x7, 0x8, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0x8, 0x5, 
    0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 
    0x7, 0x9, 0x2, 0x2, 0x43, 0x74, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 
    0xa, 0x2, 0x2, 0x45, 0x46, 0x7, 0x4, 0x2, 0x2, 0x46, 0x47, 0x5, 0x6, 
    0x4, 0x2, 0x47, 0x48, 0x7, 0x5, 0x2, 0x2, 0x48, 0x4c, 0x7, 0x8, 0x2, 
    0x2, 0x49, 0x4b, 0x5, 0x8, 0x5, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x9, 0x2, 0x2, 0x50, 0x51, 0x7, 
    0xb, 0x2, 0x2, 0x51, 0x55, 0x7, 0x8, 0x2, 0x2, 0x52, 0x54, 0x5, 0x8, 
    0x5, 0x2, 0x53, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x59, 0x7, 0x9, 0x2, 0x2, 0x59, 0x74, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 
    0x7, 0xa, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x4, 0x2, 0x2, 0x5c, 0x5d, 0x5, 
    0x6, 0x4, 0x2, 0x5d, 0x5e, 0x7, 0x5, 0x2, 0x2, 0x5e, 0x62, 0x7, 0x8, 
    0x2, 0x2, 0x5f, 0x61, 0x5, 0x8, 0x5, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x9, 0x2, 0x2, 0x66, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0xc, 0x2, 0x2, 0x68, 0x69, 0x5, 
    0x6, 0x4, 0x2, 0x69, 0x6a, 0x7, 0x7, 0x2, 0x2, 0x6a, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x6c, 0x7, 0xc, 0x2, 0x2, 0x6c, 0x74, 0x7, 0x7, 0x2, 
    0x2, 0x6d, 0x6e, 0x7, 0xd, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x4, 0x2, 0x2, 
    0x6f, 0x70, 0x5, 0x6, 0x4, 0x2, 0x70, 0x71, 0x7, 0x5, 0x2, 0x2, 0x71, 
    0x72, 0x7, 0x7, 0x2, 0x2, 0x72, 0x74, 0x3, 0x2, 0x2, 0x2, 0x73, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x37, 0x3, 0x2, 0x2, 0x2, 0x73, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x73, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x9, 0x3, 0x2, 0x2, 0x2, 0x75, 0x77, 0x5, 0x8, 0x5, 0x2, 
    0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 
    0x2, 0x2, 0x3, 0x7c, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0x11, 0x19, 0x1d, 
    0x28, 0x2f, 0x3f, 0x4c, 0x55, 0x62, 0x73, 0x78, 
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
