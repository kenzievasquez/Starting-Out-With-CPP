// 15.12 Ship, CruiseShip, and CargoShip Classes (pg. 967)
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
#include <iostream>
#include <memory>
#include <vector>

int main(int argc, char const *argv[]){
    std::vector<Ship *> ships;
    ships.push_back(new Ship{"Queen Mary","1943"});
    ships.push_back(new CruiseShip{"RMS Titanic","1909",3320});
    ships.push_back(new CargoShip{"Ever Given","2018",99155});

    for(int i=0; i<ships.size(); i++){
        std::cout<<"Ship "<<i+1<<":\n";
        ships[i]->print();
        std::cout<<"\n";
    }

    // Clean up
    for(int i=0; i<ships.size(); i++){
        delete ships[i];
    }

    return 0;
}
