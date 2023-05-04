#include "Person.hpp"


Person PersonFactory::create_person(const string& name)
{
    return { id++, name };
}
