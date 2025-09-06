#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"
#include <iostream>
#include <string>

class CustomerData : public PersonData
{
private:
    int customerNumber;
    bool mailingList;

public:
    CustomerData(std::string last, std::string first, std::string address,
                 std::string city, std::string state, std::string zip, std::string phone,
                 int custNum, bool mailList)
        : PersonData(last, first, address, city, state, zip, phone),
          customerNumber(custNum), mailingList(mailList) {}
    virtual ~CustomerData() {}

    void setCustomerNumber(int customerNum) { this->customerNumber = customerNum; }
    void setMailingList(bool optIn) { this->mailingList = optIn; }
    int getCustomerNumber() const { return this->customerNumber; }
    bool getMailingList() const { return this->mailingList; }
    void display(){
        PersonData::display();
        std::cout << "Customer #: " << this->customerNumber << "\nOpt-in mailing list: " 
                  << std::boolalpha << this->mailingList << "\n";
    }
};

#endif