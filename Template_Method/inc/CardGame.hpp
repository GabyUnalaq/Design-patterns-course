#ifndef CARDGAME_HPP
#define CARDGAME_HPP

#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;

struct Creature {
    int attack, health;

    Creature(int attack, int health) : attack(attack), health(health) {}

    bool is_alive() { return health > 0; }
};

class CardGame {
public:
    vector<Creature> creatures;

public:
    CardGame(const vector<Creature>& creatures) : creatures(creatures) {}

    // Returns winner, -1 if both alive or dead
    int combat(int creature1, int creature2);

    virtual void hit(Creature& attacker, Creature& other) = 0;
};

class TemporaryCardDamageGame : public CardGame {
public:
    TemporaryCardDamageGame(const vector<Creature>& creatures) : CardGame(creatures) {}

    void hit(Creature& attacker, Creature& other) override;
};

class PermanentCardDamageGame : public CardGame {
public:
    PermanentCardDamageGame(const vector<Creature>& creatures) : CardGame(creatures) {}

    void hit(Creature& attacker, Creature& other) override;
};

#endif // CARDGAME_HPP