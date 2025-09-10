#include "Savings_Account.h"
#include <iomanip>

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}
bool Savings_Account::withdraw(double withdrawal){
    return Account::withdraw(withdrawal);
}
void Savings_Account::print(std::ostream &os) const {
    os << std::fixed << std::setprecision(2) << "[Savings_Account: " << this->name << ": $" << this->balance << ", " << this->int_rate << "]";
}
std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
    account.print(os);
    return os;
}

