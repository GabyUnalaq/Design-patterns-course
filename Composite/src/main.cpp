#include <iostream>
#include "exercise.hpp"

int main() {
    SingleValue single_value{ 11 };
    ManyValues other_values;
    other_values.add(22);
    other_values.add(33);

    std::cout << sum({ &single_value, &other_values }) << " should equal 66." << std::endl;
}