#include "FeetInches.h"
#include <cstdlib>
#include <iostream>

FeetInches::FeetInches(){
    //std::cout << "FeetInches constructor called.\n\n";
}
FeetInches::FeetInches(int ft=0, int inch=0){
    feet = ft;
    inches = inch;
    simplify();
}

void FeetInches::setFeet(const int ft){ feet=ft; }
void FeetInches::setInches(const int inch){ inches=inch; }
void FeetInches::simplify(){
    if(inches >= 12){
        feet += (inches / 12);
        inches = (inches % 12);
    } else if(inches < 0) {
        feet -= ((abs(inches) / 12) + 1);
    }
}


FeetInches FeetInches::operator+(FeetInches&){

}
FeetInches FeetInches::operator-(FeetInches&){

}
FeetInches FeetInches::operator--(){ // Prefix
    --inches;
    simplify();
    return *this;
}
FeetInches FeetInches::operator--(int){ // Postfix
    FeetInches temp(feet, inches);
    inches--;
    simplify();
    return temp;
}