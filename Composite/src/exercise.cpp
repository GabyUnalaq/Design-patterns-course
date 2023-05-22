#include "exercise.hpp"

int sum(const vector<ContainsIntegers*> items) {
    int result{ 0 };

    for (ContainsIntegers* it : items) {
        result += it->sum();
    }

    return result;
}