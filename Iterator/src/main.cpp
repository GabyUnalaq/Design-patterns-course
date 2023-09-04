#include <iostream>
#include <vector>
#include <sstream>

#include "Node.hpp"

int main() {
    Node<char> c{ 'c' };
    Node<char> d{ 'd' };
    Node<char> e{ 'e' };
    Node<char> b{ 'b', &c, &d };
    Node<char> a{ 'a', &b, &e };

    std::vector<Node<char>*> result;
    a.preorder_traversal(result);

    std::ostringstream oss;
    for (auto n : result)
        oss << n->get_value();
    std::cout << oss.str() << " should be abcde" << std::endl;
}