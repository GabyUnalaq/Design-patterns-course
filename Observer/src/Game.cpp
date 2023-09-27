#include "Game.hpp"
#include "Rat.hpp"


void Game::update_rats_attack() {
    for (Rat* rat : rats)
        if (rat)
            rat->set_attack(rats_num);
}

void Game::add_rat(Rat* rat) {
    auto it = std::find(rats.begin(), rats.end(), nullptr);
    if (it != rats.end())
        *it = rat;
    else
        rats.push_back(rat);
    rats_num++;
    update_rats_attack();
}

void Game::remove_rat(Rat* rat) {
    auto it = std::find(rats.begin(), rats.end(), rat);
    if (it != rats.end()) {
        *it = nullptr;
        rats_num--;
    }
    update_rats_attack();
}
