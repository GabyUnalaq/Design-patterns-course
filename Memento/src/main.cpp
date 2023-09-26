#include <iostream>
#include "TokenMachine.hpp"


int main() {

    TokenMachine tm;
    tm.add_token(1);
    auto m = tm.add_token(2);
    tm.add_token(3);

    tm.revert(m);

    std::cout << "Expected output: 1 2\n";
    std::cout << tm << std::endl;

	return 0;
}
