#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Rat;

class Game {
private:
    std::vector<Rat*> rats;
    int rats_num = 0;

public:
    void add_rat(Rat* rat);
    void remove_rat(Rat* rat);

    void update_rats_attack();
};


#endif // GAME_HPP