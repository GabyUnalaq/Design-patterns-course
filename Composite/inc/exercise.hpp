#ifndef EXERCISE_HPP
#define EXERCISE_HPP

#include <vector>
#include <numeric>

using namespace std;

class ContainsIntegers {
public:
    virtual int sum() = 0;
};

class SingleValue : public ContainsIntegers {
private:
    int value{ 0 };

public:
    SingleValue() = default;

    explicit SingleValue(const int value)
        : value{ value } {}

    int sum() override { return value; };
};

class ManyValues : vector<int>, public ContainsIntegers {
public:
    void add(const int value) {
        push_back(value);
    }

    int sum() override {
        return accumulate(begin(), end(), 0);
    }
};

int sum(const vector<ContainsIntegers*> items);

#endif // EXERCISE_HPP