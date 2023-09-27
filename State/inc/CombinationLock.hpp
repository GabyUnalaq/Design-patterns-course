#ifndef COMBINATIONLOCK_HPP
#define COMBINATIONLOCK_HPP

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class CombinationLock
{
    vector<int> combination;
    vector<int> digits;
public:
    string status;

    CombinationLock(const vector<int>& combination) 
        : combination(combination), status{ "LOCKED" } {}

    void enter_digit(int digit);

    bool check_equal();
};

#endif // COMBINATIONLOCK_HPP