#include <iostream>
#include "QuadraticEquationSolver.hpp"

int main() {
    std::cout << std::boolalpha;
    {
        OrdinaryDiscriminantStrategy strategy;
        QuadraticEquationSolver solver{ strategy };
        auto results = solver.solve(1, 4, 5);
        std::cout << (complex<double>(-2, 1) == get<0>(results)) << std::endl;
        std::cout << (complex<double>(-2, -1) == get<1>(results)) << std::endl;
    }

    {
        RealDiscriminantStrategy strategy;
        QuadraticEquationSolver solver{ strategy };
        auto results = solver.solve(1, 4, 5);
        auto x1 = get<0>(results);
        auto x2 = get<1>(results);
        std::cout << (isnan(x1.real())) << std::endl;
        std::cout << (isnan(x2.real())) << std::endl;
        std::cout << (isnan(x1.imag())) << std::endl;
        std::cout << (isnan(x2.imag())) << std::endl;
    }

	return 0;
}
