#include <iostream>
#include "Person.hpp"

int main() {
    Person p{ 10 };
    ResponsiblePerson rp{ p };

    std::cout << rp.drive() << std::endl; // "too young"
    std::cout << rp.drink() << std::endl; // "too young"
    std::cout << rp.drink_and_drive() << std::endl; // "dead"

    rp.set_age(20);

    std::cout << rp.drive() << std::endl; // "driving"
    std::cout << rp.drink() << std::endl; // "drinking"
    std::cout << rp.drink_and_drive() << std::endl; // "dead"
}