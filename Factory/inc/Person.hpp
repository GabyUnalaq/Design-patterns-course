#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using namespace std;


struct Person
{
    int id;
    string name;

    Person() = default;

    friend ostream& operator<<(ostream& os, Person& p) {
        os << p.id << ' ' << p.name << std::endl;
        return os;
    }
};


class PersonFactory
{
public:
    int id{ 0 };

public:
    Person create_person(const string& name);
};


#endif // PERSON_HPP