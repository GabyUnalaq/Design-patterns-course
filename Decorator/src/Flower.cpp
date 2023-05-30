#include "Flower.hpp"


string Rose::str() {
    ostringstream oss;
    oss << "A rose";
    return oss.str();
}

string RedFlower::str() {
    ostringstream oss;
    string msg = fl.str();

    if (msg.find("red") != string::npos)
    {
        oss << msg;
    }
    else // Not found
    {
        if (msg.find("that") != string::npos)
            oss << fl.str() << " and red";
        else
            oss << fl.str() << " that is red";
    }
    return oss.str();
}

string BlueFlower::str() {
    ostringstream oss;
    string msg = fl.str();

    if (msg.find("blue") != string::npos)
    {
        oss << msg;
    }
    else // Not found
    {
        if (msg.find("that") != string::npos)
            oss << fl.str() << " and blue";
        else
            oss << fl.str() << " that is blue";
    }
    return oss.str();
}