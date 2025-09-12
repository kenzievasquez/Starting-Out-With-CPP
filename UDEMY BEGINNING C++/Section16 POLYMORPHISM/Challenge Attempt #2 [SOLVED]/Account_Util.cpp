#include <iostream>
#include <iomanip>
#include "Account_Util.h"

void display(const std::vector<Account *> &accounts){
    std::cout << "\n=== Accounts===========================================\n";
    for (const auto &acc: accounts) 
        std::cout << *acc << "\n";
}
void deposit(std::vector<Account *> &accounts, double amount){
    std::cout << "\n=== Depositing to Accounts =================================\n";
    for (const auto &acc:accounts)  {
        if (acc->deposit(amount)) 
            std::cout << std::fixed << std::setprecision(2) << "Deposited $" << amount << " to " << *acc << "\n";
        else
            std::cout << std::fixed << std::setprecision(2) << "Failed Deposit of $" << amount << " to " << *acc << "\n";
    }
}
void withdraw(std::vector<Account *> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Accounts ==============================\n";
    for (auto &acc:accounts)  {
        if (acc->withdraw(amount)) 
            std::cout << std::fixed << std::setprecision(2) << "Withdrew $" << amount << " from " << *acc << "\n";
        else
            std::cout << std::fixed << std::setprecision(2) << "Failed Withdrawal of $" << amount << " from " << *acc << "\n";
    } 
}