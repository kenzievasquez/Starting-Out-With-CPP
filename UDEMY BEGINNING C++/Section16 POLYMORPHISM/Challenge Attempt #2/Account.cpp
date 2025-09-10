#include "Account.h"
#include <iomanip>

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}
void Account::print(std::ostream &os) const {
    os << std::fixed << std::setprecision(2) << "[Account: " << this->name << ": $" << this->balance << "]";
}
std::ostream &operator<<(std::ostream &os, const Account &account){
    account.print(os);
    return os;
}
