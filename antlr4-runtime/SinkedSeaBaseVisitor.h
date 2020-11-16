
// Generated from SinkedSea.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SinkedSeaVisitor.h"


namespace SinkedSea {

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

  virtual antlrcpp::Any visitCommand(SinkedSeaParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile(SinkedSeaParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace SinkedSea
