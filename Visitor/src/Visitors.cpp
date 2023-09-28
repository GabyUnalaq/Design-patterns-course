#include "Visitors.hpp"

// Printer Visitor
void ExpressionPrinter::accept(Value& expr) {
    oss << expr.get_value();
}

void ExpressionPrinter::accept(AdditionExpression& expr) {
    oss << '(';
    expr.get_left().visit(*this);
    oss << '+';
    expr.get_right().visit(*this);
    oss << ')';
}

void ExpressionPrinter::accept(MultiplicationExpression& expr) {
    expr.get_left().visit(*this);
    oss << '*';
    expr.get_right().visit(*this);
}


// Evaluator Visitor
void ExpressionEvaluator::accept(Value& expr) {
    result = expr.get_value();
}

void ExpressionEvaluator::accept(AdditionExpression& expr) {
    expr.get_left().visit(*this);
    auto temp = result;
    expr.get_right().visit(*this);

    result += temp;
}

void ExpressionEvaluator::accept(MultiplicationExpression& expr) {
    expr.get_left().visit(*this);
    auto temp = result;
    expr.get_right().visit(*this);

    result *= temp;
}