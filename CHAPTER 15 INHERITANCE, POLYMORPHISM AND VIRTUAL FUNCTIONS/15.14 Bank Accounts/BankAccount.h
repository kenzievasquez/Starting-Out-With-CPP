#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
private:
    float balance;
    unsigned short numDepositsInMonth;
    unsigned short numWithdrawalsInMonth;
    float annualInterestRate;
    float monthlyCharges; // monthly service charges

    public:
    BankAccount(float,float);
    virtual ~BankAccount();
    
    virtual void deposit(float);
    virtual void withdraw(float);
    virtual void calcInt();
    virtual void monthlyProc();
    
    float getBalance();
    unsigned short getNumWithdrawalsInMonth();
    void addMonthlyCharges(float);
    virtual void display() const;
};

#endif