#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(float bal,float intRate) 
    : balance(bal), annualInterestRate(intRate), monthlyCharges(0) {}
BankAccount::~BankAccount(){}

void BankAccount::deposit(float deposit){
    std::cout<<"Balance before $"<<deposit<<" deposit: $"<<this->getBalance()<<"\n";
    this->balance+=deposit;
    ++numDepositsInMonth;
    this->display();
}
void BankAccount::withdraw(float withdrawal){
    std::cout<<"Balance before $"<<withdrawal<<" withdrawal: $"<<this->getBalance()<<"\n";
    this->balance-=withdrawal;
    ++numWithdrawalsInMonth;
    this->display();
}
void BankAccount::calcInt(){
    this->balance=this->balance+(this->balance*(this->annualInterestRate/12));
}
void BankAccount::monthlyProc(){
    this->balance-=monthlyCharges;
    this->calcInt();
    this->numDepositsInMonth=this->numWithdrawalsInMonth=this->monthlyCharges=0;
}
float BankAccount::getBalance(){ return this->balance; }
unsigned short BankAccount::getNumWithdrawalsInMonth(){ return this->numWithdrawalsInMonth; }
void BankAccount::addMonthlyCharges(float monthlyCharges){
    this->monthlyCharges+=monthlyCharges;
}
void BankAccount::display() const {
    std::cout<<"# of deposits within month: "<<this->numDepositsInMonth<<"\n";
    std::cout<<"# of withdrawals within month: "<<this->numWithdrawalsInMonth<<"\n";
    std::cout<<"Current monthly charges: $"<<this->monthlyCharges<<"\n";
    std::cout<<"CURRENT BALANCE: $"<<this->balance<<"\n\n";
}