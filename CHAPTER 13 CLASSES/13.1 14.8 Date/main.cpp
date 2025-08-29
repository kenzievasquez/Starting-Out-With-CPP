/* 14.8 Date Class Modification (pg.887)
    Modify the Date class in Programming Challenge 1 of Chapter 13. The new version
    should have the following overloaded operators:
    ++Prefix and postfix increment operators. These operators should increment the
    object's day member.
    −−Prefix and postfix decrement operators. These operators should decrement the
    object's day member.
    −Subtraction operator. If one Date object is subtracted from another, the operator
    should give the number of days between the two dates. For example, if April 10,
    2014 is subtracted from April 18, 2014, the result will be 8.
    << cout’s stream insertion operator. This operator should cause the date to be dis-
    played in the form

    April 18, 2014

    >> cin’s stream extraction operator. This operator should prompt the user for a date
    to be stored in a Date object.
*/
#include "Date.h"
#include <iostream>

int main(){
    int month, day, year;
    bool isInvalid;
    Date birthday;

    //birthday.setDate(month, day, year);
    birthday.setDate(12, 31, 2000);
    
    (birthday++).printForm1(); // Should be: 5 
    birthday.printForm2();
    birthday.printForm3();

    std::cout<<std::endl;
    return 0;
}