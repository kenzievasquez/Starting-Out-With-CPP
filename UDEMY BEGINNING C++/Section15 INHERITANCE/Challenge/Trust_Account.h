#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"
#include <string>

class Trust_Account : public Savings_Account {
private:
    unsigned short int num_withdrawals;
    
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr float def_balance = 0.0;
    static constexpr unsigned short max_withdrawals = 3;
    static constexpr int bonus_threshold = 5000;
    static constexpr int bonus_amount = 50;
public:
    Trust_Account(std::string= def_name, float bal= def_balance, float int_rate= 0.0);

    bool deposit(float amount);
    bool withdraw(float amount);

    friend std::ostream &operator<<(std::ostream &COUT, const Trust_Account &account);
};

#endif