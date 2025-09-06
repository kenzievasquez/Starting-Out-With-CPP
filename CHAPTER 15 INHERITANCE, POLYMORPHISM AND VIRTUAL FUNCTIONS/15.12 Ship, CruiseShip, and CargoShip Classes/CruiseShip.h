#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include <iostream>
#include "Ship.h"

class CruiseShip : public Ship {
private:
    int maxPassengers;

public:
    CruiseShip(std::string nm="", std::string yr="", int maxPass=0) 
        : Ship(nm, yr), maxPassengers(maxPass) {}
    ~CruiseShip() {}

    void print() override {
        std::cout<<"Name: "<<this->getName()<<"\n";
        std::cout<<"Max passengers: "<<this->maxPassengers<<"\n";
    }
};

#endif