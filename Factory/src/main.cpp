#include <iostream>
#include "Person.hpp"


int main() {
	PersonFactory pf;

	Person p = pf.create_person("Anafura");
	std::cout << p;
}