#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <vector>

template <typename T>
class Node
{
private:
    T value;

    Node* left{ nullptr }, * right{ nullptr }, * parent{ nullptr };

public:
    Node(T value) : value(value) {}

    Node(T value, Node<T>* left, Node<T>* right) : value(value), left(left), right(right) { 
        left->parent = right->parent = this;  
    }

    T get_value() { return this->value; };

    void preorder_traversal(std::vector<Node<T>*>& result) {
        result.push_back(this);
        if (this->left)
            this->left->preorder_traversal(result);
        if (this->right)
            this->right->preorder_traversal(result);
    }
};

#endif // NODE_HPP