#include "Geometry.hpp"


int Rectangle::area() const {
    return width() * height();
}


int SquareToRectangleAdapter::width() const {
    return sq_side;
}

int SquareToRectangleAdapter::height() const {
    return sq_side;
}