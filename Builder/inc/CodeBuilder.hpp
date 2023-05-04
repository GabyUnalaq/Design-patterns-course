#ifndef CODEBUILDER_H
#define CODEBUILDER_H

#include <string>
#include <ostream>
#include <vector>

using namespace std;

// Field of a class
class Field
{
private:
    string name{}, type{};

public:
    Field(const string& name, const string& type) : name{ name }, type{ type } {};
    ~Field() = default;

    friend ostream& operator<<(ostream& os, const Field& f);
};

// Main Class
class Class
{
private:
    friend class ClassBuilder;
    string class_name{};
    vector<Field> fields;

private:
    Class() = default;
    Class(string& name) : class_name{ name } {};
    Class(string& name, vector<Field> vec) : class_name{ name }, fields{ vec } {};

public:
    ~Class() = default;

    friend ostream& operator<<(ostream& os, const Class& c);
};

// Class builder
class ClassBuilder
{
private:
    Class cls;

public:
    ClassBuilder(const string& class_name);

    ClassBuilder& add_field(const string& name, const string& type);

    operator Class() const;

    friend ostream& operator<<(ostream& os, const ClassBuilder& cb);
};

// Change name so that the main stays the same
typedef ClassBuilder CodeBuilder;

#endif // CODEBUILDER_H