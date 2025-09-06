#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H
#include "CustomerData.h"
#include <iostream>
#include <string>

class PreferredCustomer: public CustomerData {
private:
    double purchasesAmount;
    double discountLevel;

    void configureDiscount(){
        if(purchasesAmount>=500 && purchasesAmount<1000) discountLevel=5.f;
        if(purchasesAmount>=1000 && purchasesAmount<1500) discountLevel=6.f;
        if(purchasesAmount>=1500 && purchasesAmount<2000) discountLevel=7.f;
        if(purchasesAmount>=2000) discountLevel=10.f;
    }
public:
    PreferredCustomer(std::string last, std::string first, std::string address,
        std::string city, std::string state, std::string zip, std::string phone,
        int custNum, bool mailList, double purchasesAmount)
            : CustomerData(last,first,address,city,state,zip,phone,custNum,mailList), 
            purchasesAmount(purchasesAmount) {
                this->configureDiscount();
            }
    ~PreferredCustomer() {}

    void setPurchasesAmount(double purchasesAmount) {
        if(purchasesAmount<0){
            std::cout<<"Purchases Amount was negative. Setting it to 0.\n";
            purchasesAmount=0;
        } else this->purchasesAmount=purchasesAmount;
        this->configureDiscount();
    }
    void setDiscountLevel(double discountLvl) { this->discountLevel=discountLvl; }
    double getPurchasesAmount() const { return this->purchasesAmount; }
    double getDiscountLevel() const { return this->discountLevel; }
    void display() const { 
        CustomerData::display();
        std::cout<<"Purchases amount: $"<<purchasesAmount<<"\nDiscount level: "<<discountLevel<<"%\n";
    }
};

#endif