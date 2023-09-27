#include "Rat.hpp"
#include "Game.hpp"


Rat::Rat(Game& game) : game(game) {
    game.add_rat(this);
}

Rat::~Rat() {
    game.remove_rat(this);
}