// 15.14 Bank Accounts (pg.969)
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<BankAccount> customerCA=std::make_unique<CheckingAccount>(1200,5);
    std::unique_ptr<BankAccount> customerSA=std::make_unique<SavingsAccount>(5000,5);
    
    customerCA->deposit(1000);
    customerCA->withdraw(500);
    customerCA->withdraw(500);

    customerSA->deposit(2500);
    customerSA->withdraw(500);

    return 0;
}