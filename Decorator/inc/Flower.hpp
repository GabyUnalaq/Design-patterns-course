#ifndef FLOWER_HPP
#define FLOWER_HPP

#include <string>
#include <sstream>

using namespace std;

class Flower {
public:
    virtual string str() = 0;
};

class Rose : public Flower {
public:
    string str() override;
};

class RedFlower : public Flower {
private:
    Flower& fl;

public:
    RedFlower(Flower& new_fl) : fl{ new_fl } {}

    string str() override;
};

class BlueFlower : public Flower {
private:
    Flower& fl;

public:
    BlueFlower(Flower& new_fl) : fl{ new_fl } {}

    string str() override;
};

#endif // FLOWER_HPP