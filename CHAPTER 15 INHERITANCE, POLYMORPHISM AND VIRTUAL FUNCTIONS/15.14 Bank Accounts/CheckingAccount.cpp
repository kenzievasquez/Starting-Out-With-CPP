#include "CheckingAccount.h"
#include "BankAccount.h"
#include <iostream>

CheckingAccount::CheckingAccount(float bal, float intRate): BankAccount(bal,intRate) {
}
CheckingAccount::~CheckingAccount() {}
void CheckingAccount::withdraw(float withdrawal){
    std::cout<<"WITHDRAWAL FROM CHECKING ACCOUNT\n";
    if((this->getBalance()-withdrawal)<0){
        this->addMonthlyCharges(15);    
    } else {
        BankAccount::withdraw(withdrawal);
    }
    this->display();
}
void CheckingAccount::monthlyProc() {
    this->addMonthlyCharges(5+(this->getNumWithdrawalsInMonth()*.10));
    BankAccount::monthlyProc(); 
}
void CheckingAccount::display() const { BankAccount::display(); }