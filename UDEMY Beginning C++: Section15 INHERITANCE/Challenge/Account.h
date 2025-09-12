// Simple Account 
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &COUT, const Account &account);
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr float def_balance = 0.0;
protected:
    std::string name;
    float balance;
public:
    Account(std::string name= def_name, float balance= def_balance);
    
    bool deposit(float amount);
    bool withdraw(float amount);
    float get_balance() const;
};
#endif