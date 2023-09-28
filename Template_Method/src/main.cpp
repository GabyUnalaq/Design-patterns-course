#include <iostream>
#include "CardGame.hpp"

#define print_bool(x) (boolalpha << x << noboolalpha)

int main() {
    Creature c1{ 1,2 };
    Creature c2{ 1,3 };
    PermanentCardDamageGame game({ c1, c2 });
    std::cout << boolalpha << (-1 == game.combat(0, 1)) << noboolalpha << " 1/2 vs 1/3 should have no winner after first round of combat\n";
    std::cout << boolalpha << (1 == game.combat(0, 1)) << noboolalpha << " 1/1 vs 1/2 here, so winner should be = 1\n";

	return 0;
}
