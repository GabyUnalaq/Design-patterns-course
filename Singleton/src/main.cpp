#include <iostream>
#include "Singleton.hpp"

void print_result(bool condition) {
	if (condition)
		std::cout << "Result: Is singleton." << std::endl;
	else
		std::cout << "Result: Is not singleton." << std::endl;
}

int main() {
	SingletonTester tester;

	// Example* e = SingletonFactory::get();

	// Udemy example
	// print_result(tester.is_singleton<SingletonTester>([&]() -> SingletonTester* { return &tester; }));
	// print_result(tester.is_singleton<SingletonTester>([]() { return new SingletonTester{}; }));
	
	// My example
	std::cout << "Testing Singleton factory:" << std::endl;
	print_result(tester.is_singleton<Example>(SingletonFactory::get));
	
	std::cout << "Testing not singleton factory:" << std::endl;
	print_result(tester.is_singleton<Example>(NotSingletonFactory::get));

	return 0;
}
