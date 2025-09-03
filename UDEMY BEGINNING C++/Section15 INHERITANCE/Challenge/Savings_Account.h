#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

// Savings Account is a type of Account
//   adds an interest rate
// Withdraw - same as a regular account
// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//

class Savings_Account: public Account {
    friend std::ostream &operator<<(std::ostream &COUT, const Savings_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr float def_balance = 0.0;
    static constexpr float def_int_rate = 0.0;
protected:
    float int_rate;
public:
    Savings_Account(std::string name = def_name, float balance =def_balance, float int_rate = def_int_rate);    
    bool deposit(float amount);
    // Inherits the Account::withdraw methods
};

#endif // _SAVINGS_ACCOUNT_H_
