#ifndef CODEBUILDER_H
#define CODEBUILDER_H

#include <string>
#include <ostream>
#include <vector>

using namespace std;

struct Field
{
    string name{}, type{};

    Field(const string& name, const string& type);
    string str();
};

class CodeBuilder
{
private:
    string class_name{};
    vector<Field> fields;

public:
    CodeBuilder(const string& class_name);

    CodeBuilder& add_field(const string& name, const string& type);

    friend ostream& operator<<(ostream& os, const CodeBuilder& obj);
};

#endif // CODEBUILDER_H