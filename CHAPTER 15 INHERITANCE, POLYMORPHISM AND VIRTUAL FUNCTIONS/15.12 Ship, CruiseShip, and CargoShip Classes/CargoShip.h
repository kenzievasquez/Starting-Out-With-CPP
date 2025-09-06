#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "Ship.h"
#include <iostream>

class CargoShip : public Ship {
private:
    int cargoCapacityInTonnage;

public:
    CargoShip(std::string nm="", std::string yr="", int capacityInTonnage=0) 
        : Ship(nm, yr), cargoCapacityInTonnage(capacityInTonnage) {}

    void setCargoCapacity(int capacityInTonnage) { this->cargoCapacityInTonnage=capacityInTonnage; };
    int getCargoCapacity() const { return cargoCapacityInTonnage; }
    void print() override {
        std::cout<<"Name: "<<this->getName()<<"\n";
        std::cout<<"Cargo capacity: "<<this->cargoCapacityInTonnage<<"\n";
    }
};

#endif