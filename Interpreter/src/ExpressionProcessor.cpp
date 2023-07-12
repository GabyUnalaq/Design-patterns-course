#include "ExpressionProcessor.hpp"

void ExpressionProcessor::add_var(char name, int val) {
    variables[name] = val;
}

int ExpressionProcessor::calculate(const string& expression)
{
    current_op = ExpressionProcessor::plus;
    int result = 0;

    for (int i = 0; i < int(expression.size()); i++) {
        switch (expression[i]) {
        case '+':
            current_op = ExpressionProcessor::plus;
            break;
        case '-':
            current_op = ExpressionProcessor::minus;
            break;
        default:
        {
            int value{};

            if (isdigit(expression[i])) {
                ostringstream oss;
                oss << expression[i];
                int j = i + 1;
                for (; j < int(expression.size()); j++) {
                    if (isdigit(expression[j])) {
                        oss << expression[j];
                        i++;
                    }
                    else
                        break;
                }
                value = stoi(oss.str());
            }
            else { // is variable
                if (i + 1 != expression.size() && expression[i + 1] != '+' && expression[i + 1] != '-')
                    return 0;
                if (variables.find(expression[i]) != variables.end())
                    value = variables[expression[i]];
                else
                    return 0;
            }

            if (current_op == ExpressionProcessor::plus)
                result += value;
            else
                result -= value;
        }
        }
    }
    return result;
}