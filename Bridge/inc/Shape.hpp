#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>

#include "Renderer.hpp"

class Shape {
protected:
    std::string name;
    Renderer& renderer;

public:
    Shape(Renderer& r) : renderer{ r } {}
    Shape(Renderer& r, std::string name) : renderer{ r }, name{ name } {}
    virtual std::string str() const = 0;
};

class Triangle : public Shape {
public:
    Triangle(Renderer& r) : Shape(r, "Triangle") {}

    std::string str() const override;
};

class Square : public Shape {
public:
    Square(Renderer& r) : Shape(r, "Square") {}

    std::string str() const override;
};

#endif // SHAPE_HPP