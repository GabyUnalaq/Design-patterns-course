#include "Game.hpp"
#include "Rat.hpp"

int main() {
    Game gm{};
    Rat rat1{ gm };
    Rat rat2{ gm };
    {
        Rat rat3{ gm };
    }

    std::cout << rat1.get_attack() << std::endl;
}