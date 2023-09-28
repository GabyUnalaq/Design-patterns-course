#include <iostream>
#include "Expression.hpp"
#include "Visitors.hpp"


int main() {
    // (2+3)*4
    MultiplicationExpression expr{ 
        AdditionExpression{ 
            Value{ 2 }, 
            Value{ 3 } 
        }, 
        Value{ 4 } 
    };

    ExpressionPrinter ep; // Printer visitor
    ep.accept(expr);

    ExpressionEvaluator ev; // Evaluator visitor
    ev.accept(expr);

    std::cout << ep.str() << " = " << ev.str() << std::endl;

	return 0;
}
