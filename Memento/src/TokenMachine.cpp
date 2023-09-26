#include "TokenMachine.hpp"


Memento TokenMachine::add_token(int value) {
    return add_token(make_shared<Token>(value));
}

Memento TokenMachine::add_token(const shared_ptr<Token>& token) {
    tokens.push_back(token);

    // Create new tokens list
    vector<shared_ptr<Token>> new_tokens;
    for (auto t : tokens) {
        new_tokens.push_back(make_shared<Token>(t->get_value()));
    }
    return { new_tokens };
}

void TokenMachine::revert(const Memento& m) {
    tokens.clear();

    for (auto t : m.tokens)
        tokens.push_back(make_shared<Token>(t->get_value()));
}

ostream& operator<<(ostream& os, const TokenMachine& tm) {
    os << "Tokens: ";
    for (auto t : tm.tokens) {
        os << t->get_value() << ' ';
    }
    return os;
}