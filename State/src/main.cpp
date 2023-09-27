#include <iostream>
#include "CombinationLock.hpp"


int main() {
	CombinationLock cl({ 1,2,3 });
	std::cout << cl.status << std::endl; // LOCKED
	cl.enter_digit(1);
	std::cout << cl.status << std::endl; // 1
	cl.enter_digit(2);
	std::cout << cl.status << std::endl; // 2
	cl.enter_digit(3);
	std::cout << cl.status << std::endl; // OPEN
}
