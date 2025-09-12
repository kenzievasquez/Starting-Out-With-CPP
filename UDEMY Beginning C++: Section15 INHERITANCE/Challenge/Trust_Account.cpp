#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, float bal, float int_rate)
    : Savings_Account(name, bal, int_rate), num_withdrawals(0) {
}

bool Trust_Account::deposit(float amount) {
    if(amount >= bonus_threshold)
        amount += bonus_amount;

    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(float amount) {
    // only 3 withdrawals allowed, each less than 20% of the balance
    if(num_withdrawals < max_withdrawals && amount <= (balance * 0.2)) {
        num_withdrawals++;
        return Savings_Account::withdraw(amount);
    }
    return false;
}

std::ostream &operator<<(std::ostream &COUT, const Trust_Account &account) {
    COUT << "[Trust Account: " << account.name << ": " 
         << account.balance << ", " << account.int_rate 
         << "%, withdrawals: " << account.num_withdrawals << "]";
    return COUT;
}