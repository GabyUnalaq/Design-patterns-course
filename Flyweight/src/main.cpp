#include <iostream>
#include "Sentence.hpp"

int main() {
	Sentence sentence("hello world");
	sentence[1].capitalize = true;
	std::cout << sentence.str(); // prints "hello WORLD"
}