#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"

class SavingsAccount: public BankAccount {
private:
    bool status; // represents an active or inactive account
public:
    SavingsAccount(float,float);
    ~SavingsAccount();

    void deposit(float) override final;
    void withdraw(float) override final;
    void monthlyProc() override final;
    void checkBalance();
    void display() const override final;
};

#endif