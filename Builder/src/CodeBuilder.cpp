#include "CodeBuilder.hpp"

// FIELD
ostream& operator<<(ostream& os, const Field& f) {
    os << f.type << ' ' << f.name << ";";\
    return os;
}

// CLASS
ostream& operator<<(ostream& os, const Class& c) {
    os <<
        "class " << c.class_name << endl <<
        '{' << endl;
    for (auto& field : c.fields)
    {
        os << "  " << field << endl;
    }
    os << "};";
    return os;
}

// CLASS_BUILDER
ClassBuilder::ClassBuilder(const string& class_name) {
    cls.class_name = class_name;
}

ClassBuilder& ClassBuilder::add_field(const string& name, const string& type) {
    cls.fields.push_back(Field(name, type));
    return *this;
}

ClassBuilder::operator Class() const {
    return cls;
}

ostream& operator<<(ostream& os, const ClassBuilder& cb) {
    os << cb.cls;
    return os;
}