#include "ProductionWorker.h"
#include "Employee.h"
#include <iostream>

ProductionWorker::ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0){}

ProductionWorker::ProductionWorker(std::string empName, int empNumber, std::string empHireDate, int empShift, double empHourlyPayRate)
    : Employee(empName, empNumber, empHireDate), shift(empShift), hourlyPayRate(empHourlyPayRate) {
        std::cout << "ProductionWorker constructor called.\n";
}
ProductionWorker::~ProductionWorker() { std::cout << "ProductionWorker destructor called!\n"; }

void ProductionWorker::setShift(int empShift){ this->shift= empShift; }
void ProductionWorker::setHourlyPayRate(double empHourlyPayRate) { this->hourlyPayRate= empHourlyPayRate; }

int ProductionWorker::getShift() const { return this->shift; }
double ProductionWorker::getHourlyPayRate() const { return this->hourlyPayRate; }

std::string ProductionWorker::getShiftName() const { return (shift == 1) ? "Day" : "Night" ; }

std::ostream& operator<<(std::ostream& COUT, const ProductionWorker& worker){
    COUT << "Employee Name: " << worker.getName()
         << "\nEmployee Number: " << worker.getEmployeeNumber()
         << "\nHire Date: " << worker.getHireDate()
         << "\nShift: " << worker.getShiftName()
         << "\nHourly Pay Rate: $" << worker.hourlyPayRate << std::endl;

         return COUT;
}