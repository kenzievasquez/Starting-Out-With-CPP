/* 15.2 ShiftSupervisor Class
In a particular factory a shift supervisor is a salaried employee who supervises a shift.
In addition to a salary, the shift supervisor earns a yearly bonus when his or her shift
meets production goals. Design a ShiftSupervisor class that is derived from the
Employee class you created in Programming Challenge 1. The ShiftSupervisor class
should have a member variable that holds the annual salary and a member variable
that holds the annual production bonus that a shift supervisor has earned. Write one
or more constructors and the appropriate accessor and mutator functions for the class.
Demonstrate the class by writing a program that uses a ShiftSupervisor object.
*/
#include "Employee.h"
#include "ShiftSupervisor.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    ShiftSupervisor supervisor("John Doe", 12345, "2020-01-15", 75000.f, 5000.f);
    std::cout << supervisor;

    return 0;
}
