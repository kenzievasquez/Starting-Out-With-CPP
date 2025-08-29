#include "FeetInches.h"
#include "Rectangle.h"
#include <iostream>

int main(){
    Rectangle box1(1,1), 
              box2(2,2);
    Rectangle box3(box1);
    FeetInches length;

    box1.operator=(box2);

    std::cout << "box1:\n" << box1 << "\n\n" <<
                 "box2:\n" << box2 << "\n\n" <<
                 "box3:\n" << box3 << "\n\n";

    
    return 0;
}