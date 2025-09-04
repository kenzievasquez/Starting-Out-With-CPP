// 2.10 Miles Per Gallon (pg.81)
#include <iostream>

int main(){
    int gasTank = 15; // gallons of gas
    int range = 375;  // miles before refueling
    float mpg = range / gasTank;

    std::cout << "With " << gasTank << " gallons of gas in the tank\n"
              << "and a range of " << range << " miles,\n"
              << "my car runs on " << mpg << " miles per gallon.\n";

    return 0;
}
