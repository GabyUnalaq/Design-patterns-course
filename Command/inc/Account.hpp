#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <string>

using namespace std;

struct Command
{
    enum Action { deposit, withdraw } action;
    int amount{ 0 };
    bool success{ false };
};

struct Account
{
    int balance{ 0 };

    void process(Command& cmd);
};


#endif // ACCOUNT_HPP