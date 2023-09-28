#ifndef QUADRATICEQUATIONSOLVER_HPP
#define QUADRATICEQUATIONSOLVER_HPP

#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include <limits>
#include <tuple>
using namespace std;

class DiscriminantStrategy {
public:
    virtual double calculate_discriminant(double a, double b, double c) = 0;
};

class OrdinaryDiscriminantStrategy : public DiscriminantStrategy {
public:
    double calculate_discriminant(double a, double b, double c);
};

class RealDiscriminantStrategy : public DiscriminantStrategy {
public:
    double calculate_discriminant(double a, double b, double c);
};

class QuadraticEquationSolver {
private:
    DiscriminantStrategy& strategy;

public:
    QuadraticEquationSolver(DiscriminantStrategy& strategy) : strategy(strategy) {}

    tuple<complex<double>, complex<double>> solve(double a, double b, double c);
};

#endif // QUADRATICEQUATIONSOLVER_HPP