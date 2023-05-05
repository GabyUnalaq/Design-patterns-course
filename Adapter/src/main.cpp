#include <iostream>
#include "Geometry.hpp"


int main() {
    Square sq{ 11 };
    SquareToRectangleAdapter adapter{ sq };

    std::cout << adapter.area() << " should equal 121." << std::endl;
}