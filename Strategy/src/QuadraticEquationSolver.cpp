#include "QuadraticEquationSolver.hpp"


double OrdinaryDiscriminantStrategy::calculate_discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

double RealDiscriminantStrategy::calculate_discriminant(double a, double b, double c) {
    double ret = b * b - 4 * a * c;
    if (ret < 0) return numeric_limits<double>::quiet_NaN();
    return ret;
}


tuple<complex<double>, complex<double>> QuadraticEquationSolver::solve(double a, double b, double c) {
    complex<double> pos_res = (-1 * b + sqrt(complex<double>(strategy.calculate_discriminant(a, b, c), 0.0))) / (2 * a);
    complex<double> neg_res = (-1 * b - sqrt(complex<double>(strategy.calculate_discriminant(a, b, c), 0.0))) / (2 * a);

    return { pos_res, neg_res };
}