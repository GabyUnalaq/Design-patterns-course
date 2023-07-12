#include <iostream>
#include "ExpressionProcessor.hpp"

int main() {
    ExpressionProcessor ep;
    ep.add_var('x', 5);

    std::cout << ep.calculate("1") << " should equal 1.\n";
    std::cout << ep.calculate("1+2") << " should equal 3.\n";
    std::cout << ep.calculate("1+x") << " should equal 6.\n";
    std::cout << ep.calculate("1+xy") << " should equal 0.\n";
}