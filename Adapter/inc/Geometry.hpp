#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP


class Square {
private:
    int side{ 0 };

    friend class SquareToRectangleAdapter; // Or I could have just made a public getter for side

public:
    explicit Square(const int side) : side(side) {}
};

class Rectangle {
public:
    virtual int width() const = 0;
    virtual int height() const = 0;

    int area() const;
};

class SquareToRectangleAdapter : public Rectangle
{
private:
    int sq_side{};

public:
    SquareToRectangleAdapter(const Square& square) : sq_side{ square.side } {};

    int width() const override;
    int height() const override;
};


#endif // GEOMETRY_HPP