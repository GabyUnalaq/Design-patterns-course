#ifndef LINE_HPP
#define LINE_HPP

#include <iostream>

struct Point
{
    int x{ 0 }, y{ 0 };

    Point() = default;
    Point(const int x, const int y);
};

struct Line
{
    Point* start, * end;

    Line(Point* const start, Point* const end);

    ~Line();

    Line deep_copy() const;
};

#endif // LINE_HPP