#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP

#include <string>
#include <sstream>
using namespace std;

class Value;
class AdditionExpression;
class MultiplicationExpression;

// Virtual class for Visitor
class ExpressionVisitor {
public:
    virtual void accept(Value& expr) = 0;
    virtual void accept(AdditionExpression& expr) = 0;
    virtual void accept(MultiplicationExpression& expr) = 0;
};

// Base class for every Expression
class Expression {
public:
    virtual void visit(ExpressionVisitor& ev) = 0;
};

// Basic value expression
class Value : public Expression {
private:
    int value;

public:
    Value(int value) : value(value) {}

    int get_value() { return value; }

    void visit(ExpressionVisitor& ev) { ev.accept(*this); }
};

// Addition Expression
class AdditionExpression : public Expression {
private:
    Expression& lhs, & rhs;

public:
    AdditionExpression(Expression& lhs, Expression& rhs) : lhs(lhs), rhs(rhs) {}

    Expression& get_left() { return lhs; }
    Expression& get_right() { return rhs; }

    void visit(ExpressionVisitor& ev) { ev.accept(*this); }
};

// Multiplication Expression
class MultiplicationExpression : public Expression {
private:
    Expression& lhs, & rhs;

public:
    MultiplicationExpression(Expression& lhs, Expression& rhs)
        : lhs(lhs), rhs(rhs) {}

    Expression& get_left() { return lhs; }
    Expression& get_right() { return rhs; }

    void visit(ExpressionVisitor& ev) { ev.accept(*this); }
};

#endif // EXPRESSION_HPP