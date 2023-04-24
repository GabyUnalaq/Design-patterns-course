#include "CodeBuilder.hpp"


Field::Field(const string& name, const string& type) : name(name), type(type) {

}

string Field::str() {
    return type + ' ' + name + ';';
}


CodeBuilder::CodeBuilder(const string& class_name) : class_name(class_name) {

}

CodeBuilder& CodeBuilder::add_field(const string& name, const string& type) {
    fields.push_back(Field(name, type));
    return *this;
}

ostream& operator<<(ostream& os, const CodeBuilder& obj) {
    os <<
        "class " << obj.class_name << endl <<
        '{' << endl;
    for (auto& field : obj.fields)
    {
        os << "  " << field.type << ' ' << field.name << ';' << endl;
    }
    os << "};";
    return os;
}