#ifndef EXPRESSION_PROCESSOR_HPP
#define EXPRESSION_PROCESSOR_HPP

#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

class ExpressionProcessor
{
private:
    map<char, int> variables;
    enum Operations { plus, minus } current_op;

public:
    void add_var(char name, int val);

    int calculate(const string& expression);
};

#endif // EXPRESSION_PROCESSOR_HPP