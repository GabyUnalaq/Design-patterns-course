#include "Account.hpp"


void Account::process(Command& cmd)
{
    switch (cmd.action) {
    case Command::deposit:
        balance += cmd.amount;
        cmd.success = true;
        break;
    case Command::withdraw:
        if (balance >= cmd.amount) {
            balance -= cmd.amount;
            cmd.success = true;
        }
        else
            cmd.success = false;
        break;
    }
}