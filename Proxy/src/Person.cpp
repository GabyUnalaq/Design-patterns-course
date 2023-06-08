#include "Person.hpp"

#include <string>

using namespace std;

int Person::get_age() const { return age; }
void Person::set_age(int age) { this->age = age; }

string Person::drink() const { return "drinking"; }
string Person::drive() const { return "driving"; }
string Person::drink_and_drive() const { return "driving while drunk"; }


int ResponsiblePerson::get_age() const { return person.age; }
void ResponsiblePerson::set_age(int age) { person.age = age; }

string ResponsiblePerson::drink() const {
    if (person.age < 18)
        return "too young";
    else
        return person.drink();
}

string ResponsiblePerson::drive() const {
    if (person.age < 16)
        return "too young";
    else
        return person.drive();
}

string ResponsiblePerson::drink_and_drive() const { return "dead"; }