#include "Shape.hpp"

std::string Triangle::str() const {
    return renderer.render_triangle(name);
}

std::string Square::str() const {
    return renderer.render_square(name);
}