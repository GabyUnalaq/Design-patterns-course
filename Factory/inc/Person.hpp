#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using namespace std;


class Person
{
private:
    int id;
    string name;

public:
    Person() = default;
    Person(int id, const string& str) : id{ id }, name{ str } {};

    friend ostream& operator<<(ostream& os, Person& p) {
        os << p.id << ' ' << p.name << std::endl;
        return os;
    }
};


class PersonFactory
{
private:
    int id{ 0 };

public:
    Person create_person(const string& name);
};


#endif // PERSON_HPP