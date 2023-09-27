#ifndef RAT_HPP
#define RAT_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Game;

class Rat {
private:
    Game& game;
    int attack{ 1 };

public:
    Rat(Game& game);
    ~Rat();

    void set_attack(int at) { attack = at; }
    int get_attack() { return attack; }
};

#endif // RAT_HPP