#include "Checking_Account.h"
#include <string>

Checking_Account::Checking_Account(std::string name, float balance)
    : Account(name, balance) {
}

bool Checking_Account::withdraw(float amount) {
    amount += fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &COUT, const Checking_Account &account){
    COUT << "[Checking Account: " << account.name << ": " << account.balance << "]";
    return COUT;
}