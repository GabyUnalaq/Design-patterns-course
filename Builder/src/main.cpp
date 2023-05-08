#include <iostream>
#include "CodeBuilder.hpp"

using namespace std;


int main() {
    auto cb = CodeBuilder{ "Person" }.add_field("name", "string").add_field("age", "int");
    cout << cb;
}
