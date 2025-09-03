#include "Account.h"

Account::Account(std::string name, float balance) 
    : name{name}, balance{balance} {
}

bool Account::deposit(float amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(float amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}

float Account::get_balance() const {
    return balance;
}

std::ostream &operator<<(std::ostream &COUT, const Account &account) {
    COUT << "[Account: " << account.name << ": " << account.balance << "]";
    return COUT;
}
