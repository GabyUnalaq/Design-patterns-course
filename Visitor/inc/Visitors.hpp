#ifndef VISITORS_HPP
#define VISITORS_HPP

#include <string>
#include <sstream>
#include "Expression.hpp"
using namespace std;

// Printer visitor
class ExpressionPrinter : public ExpressionVisitor {
private:
    ostringstream oss;

public:
    void accept(Value& expr) override;
    void accept(AdditionExpression& expr) override;
    void accept(MultiplicationExpression& expr) override;

    string str() const { return oss.str(); }
};

// Evaluator visitor
class ExpressionEvaluator : public ExpressionVisitor {
private:
    int result;

public:
    void accept(Value& expr) override;
    void accept(AdditionExpression& expr) override;
    void accept(MultiplicationExpression& expr) override;

    string str() const { return to_string(result); }
};

#endif // VISITORS_HPP