#include "Line.hpp"

Point::Point(const int x, const int y) : x{ x }, y{ y } {}


Line::Line(Point* const start, Point* const end)
    : start(start), end(end) {
}

Line::~Line() {
    delete start;
    delete end;
}

Line Line::deep_copy() const {
    Point* s = new Point(start->x, start->y);
    Point* e = new Point(end->x, end->y);
    
    // wrong because here the Line obj is returned by value, and is not oke
    // Line l{ s, e };
    // return l; 
    
    // This is right
    Line* l = new Line{ s, e };
    return *l;
    
    // or this
    //return Line{ s, e }; // = return *new Line{ s, e };
}