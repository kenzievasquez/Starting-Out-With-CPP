#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account: public Account {
private:
    float fee= 1.5f;
    static constexpr const char *def_name= "Unnamed Checking Account";
    static constexpr float def_bal= 0.0;
public:
    Checking_Account(std::string name= def_name, float balance=def_bal);

    bool withdraw(float amount);

    friend std::ostream &operator<<(std::ostream &COUT, const Checking_Account &account);
};

#endif