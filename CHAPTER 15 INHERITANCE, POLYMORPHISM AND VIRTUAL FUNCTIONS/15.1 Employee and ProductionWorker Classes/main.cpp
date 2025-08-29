/*
Design a class named Employee. The class should keep the following information in
- Employee name
- Employee number
- Hire date

Write one or more constructors and the appropriate accessor and mutator functions
for the class.
Next, write a class named ProductionWorker that is derived from the Employee class.
The ProductionWorker class should have member variables to hold the following
information:
- Shift (an integer)
- Hourly pay rate (a double)
The workday is divided into two shifts: day and night. The shift variable will hold an
integer value representing the shift that the employee works. The day shift is shift 1, and
the night shift is shift 2. Write one or more constructors and the appropriate accessor
and mutator functions for the class. Demonstrate the classes by writing a program that
uses a ProductionWorker object.
*/
#include "Employee.h"
#include "ProductionWorker.h"
#include <iostream>


int main()
{
    ProductionWorker dayWorker("John Doe", 12345, "08-23-2025", 1, 20);
    ProductionWorker nightWorker("Will Smith", 54321, "08-31-2025", 2, 22);

    std::cout << dayWorker << std::endl;
    std::cout << nightWorker << std::endl;

    return 0;
}
