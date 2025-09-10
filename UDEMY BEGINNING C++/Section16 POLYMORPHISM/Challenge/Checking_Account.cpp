#include "Checking_Account.h"
#include <iomanip>

Checking_Account::Checking_Account(std::string name, double balance)
    : Account {name, balance} {
}

bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    return Account::withdraw(amount);
}
bool Checking_Account::deposit(double deposit) {
    return Account::deposit(deposit);
}
void Checking_Account::print(std::ostream &os) const {
    os << std::fixed << std::setprecision(2) << "[Checking_Account: " << this->name << ": $" << this->balance  << "]";
}
std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    account.print(os);
    return os;
}
