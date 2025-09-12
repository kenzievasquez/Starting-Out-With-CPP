// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "I_Printable.h"

using namespace std; 

int main() {
    // Accounts
    vector<Account *> accounts;
    accounts.push_back(new Savings_Account {} );
    accounts.push_back(new Savings_Account {"Superman"} );
    accounts.push_back(new Savings_Account {"Batman", 2000} );
    accounts.push_back(new Savings_Account {"Wonderwoman", 5000, 5.0} );
    accounts.push_back(new Checking_Account {} );
    accounts.push_back(new Checking_Account {"Kirk"} );
    accounts.push_back(new Checking_Account {"Spock", 2000} );
    accounts.push_back(new Checking_Account {"Bones", 5000} );
    accounts.push_back(new Trust_Account {} );
    accounts.push_back(new Trust_Account {"Athos", 10000, 5.0} );
    accounts.push_back(new Trust_Account {"Porthos", 20000, 4.0} );
    accounts.push_back(new Trust_Account {"Aramis", 30000} );

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(accounts, 1000);
    
    // Cleanup
    for(const auto &acc: accounts) delete acc;
    
    return 0;
}

