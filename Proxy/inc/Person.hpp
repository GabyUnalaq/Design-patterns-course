#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    friend class ResponsiblePerson;
    int age;

public:
    Person(int age) : age(age) {}

    int get_age() const;
    void set_age(int age);

    string drink() const;
    string drive() const;
    string drink_and_drive() const;
};

class ResponsiblePerson
{
private:
    Person person;

public:
    ResponsiblePerson(const Person& person) : person(person) {}

    int get_age() const;
    void set_age(int age);

    string drink() const;
    string drive() const;
    string drink_and_drive() const;
};


#endif // PERSON_HPP