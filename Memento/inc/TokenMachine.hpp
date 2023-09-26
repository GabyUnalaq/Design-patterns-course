#ifndef TOKENMACHINE_HPP
#define TOKENMACHINE_HPP

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Token {
private:
    int value;

public:
    Token(int value) : value(value) {}

    int get_value() { return value; }
};

class Memento {
private:
    vector<shared_ptr<Token>> tokens;

public:
    Memento() = default;
    Memento(vector<shared_ptr<Token>>& tokens) : tokens(tokens) {}

    friend class TokenMachine;
};

class TokenMachine {
private:
    vector<shared_ptr<Token>> tokens;

public:
    Memento add_token(int value);

    // adds the token to the set of tokens and returns the
    // snapshot of the entire system
    Memento add_token(const shared_ptr<Token>& token);

    // reverts the system to a state represented by the token
    void revert(const Memento& m);

    friend ostream& operator<<(ostream& os, const TokenMachine& tm);
};

#endif // TOKENMACHINE_HPP