#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, float balance, float int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(float amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &COUT, const Savings_Account &account) {
    COUT << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return COUT;
}

