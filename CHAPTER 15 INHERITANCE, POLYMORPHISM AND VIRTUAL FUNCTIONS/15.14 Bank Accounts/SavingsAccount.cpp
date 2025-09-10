#include "SavingsAccount.h"
#include "BankAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(float bal, float intRate): BankAccount(bal,intRate) {
    this->checkBalance();
}
SavingsAccount::~SavingsAccount() {}

void SavingsAccount::deposit(float deposit) {
    std::cout<<"DEPOSIT TO SAVINGS ACCOUNT\n";
    if(deposit>0){
        BankAccount::deposit(deposit);
        this->checkBalance();
    } else this->display();
}
void SavingsAccount::withdraw(float withdrawal) {
    if(this->status==true){
        std::cout<<"WITHDRAWAL FROM SAVINGS ACCOUNT\n";
        //this->monthlyProc();
        BankAccount::withdraw(withdrawal);
        this->checkBalance();
    } else { 
        std::cout<<"You're account is inactive.\nYour account will be active "
                 <<"again when the balance reaches $25.\n";
    }
}
void SavingsAccount::monthlyProc() {
    if(this->getNumWithdrawalsInMonth()>4) this->addMonthlyCharges(1);
    BankAccount::monthlyProc();
}
void SavingsAccount::checkBalance(){
    if(this->getBalance()<25) this->status= false;
    else this->status= true;
}
void SavingsAccount::display() const {
    std::cout<<"Account status: "<<((this->status)?"Active":"Inactive")<<"\n";
    BankAccount::display();
}