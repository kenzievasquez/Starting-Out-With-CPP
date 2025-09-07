#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "BankAccount.h"

class CheckingAccount: public BankAccount {
private:
public:
    CheckingAccount(float,float);
    ~CheckingAccount();

    void withdraw(float) override;
    void monthlyProc() override;
    void display() const override;
};

#endif