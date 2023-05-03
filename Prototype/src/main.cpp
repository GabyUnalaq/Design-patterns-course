#include <iostream>
#include "Line.hpp"

int main() {
    Line line1{
      new Point{3,3},
      new Point{10,10}
    };

    auto line2 = line1.deep_copy();

    line1.start->x = line1.start->y =
        line1.end->y = line1.end->y = 0;

    std::cout << line2.start->x << " must equal 3." << std::endl;
}