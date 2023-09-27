#include "CombinationLock.hpp"


void CombinationLock::enter_digit(int digit)
{
    digits.push_back(digit);

    if (status.compare(string("LOCKED")) == 0 || status.compare(string("ERROR")) == 0)
        status = to_string(digit);
    else
        status += to_string(digit);

    if (check_equal())
        status = "OPEN";
    else {
        if (digits.size() >= combination.size())
            status = "ERROR";
    }
}

bool CombinationLock::check_equal() {
    if (digits.size() != combination.size())
        return false;

    for (int i = 0; i < combination.size(); i++) {
        if (digits[i] != combination[i])
            return false;
    }
    return true;
}