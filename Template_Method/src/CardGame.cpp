#include "CardGame.hpp"


int CardGame::combat(int creature1, int creature2) {
    hit(creatures[creature1], creatures[creature2]);
    hit(creatures[creature2], creatures[creature1]);

    if (creatures[creature1].is_alive() && !creatures[creature2].is_alive())
        return creature1;
    if (!creatures[creature1].is_alive() && creatures[creature2].is_alive())
        return creature2;
    return -1;
}

void TemporaryCardDamageGame::hit(Creature& attacker, Creature& other) {
    if (attacker.attack > other.health)
        other.health = 0;
}

void PermanentCardDamageGame::hit(Creature& attacker, Creature& other) {
    other.health -= attacker.attack;
}