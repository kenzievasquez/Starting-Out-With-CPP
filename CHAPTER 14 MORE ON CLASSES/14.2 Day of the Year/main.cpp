/*
Assuming that a year has 365 remaining, write a class named DayOfYear that takes an inte-
ger representing a day of the year and translates it to a string consisting of the month
followed by day of the month. For example,

Day 2 would be January 2.
Day 32 would be February 1.
Day 365 would be December 31.

The constructor for the class should take as parameter an integer representing the day
of the year, and the class should have a member function print() that prints the day
in the month–day format. The class should have an integer member variable to repre-
sent the day and should have static member variables holding string objects that can
be used to assist in the translation from the integer format to the month-day format.
Test your class by inputting various integ1
*/

#include "DayOfYear.h"
#include <iostream>

int main(){
    int num;

    // do {
    //     std::cout<<"Enter a number from 1-365: ";
    //     std::cin>>num;
    // } while(num<1||num>365);

    DayOfYear dayofyear(64);
    
    std::cout<<dayofyear.print()<<std::endl;

    return 0;
}