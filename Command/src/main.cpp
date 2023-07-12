#include "Account.hpp"

void print_details(Account& ac, Command& com) {
    cout << "Balance: " << ac.balance << ". Operation: ";
    if (com.success)
        cout << "succeded.\n";
    else
        cout << "failed.\n";
}


int main() {
    Account a;
    Command command{ Command::deposit, 100 };
    a.process(command);

    print_details(a, command); // 100, success

    command = Command{ Command::withdraw, 50 };
    a.process(command);

    print_details(a, command); // 50, success

    command = Command{ Command::withdraw, 150 };
    a.process(command);

    print_details(a, command); // 50, failed
}