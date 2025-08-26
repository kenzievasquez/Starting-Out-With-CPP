#include "Employee.h"
#include <iostream>

Employee::Employee() : Employee("", 0, "") {}
Employee::Employee(std::string empName, int empNumber, std::string empHireDate)
    : name(empName), employeeNumber(empNumber), hireDate(empHireDate) { std::cout << "Employee constructor called!\n"; }
Employee::~Employee() { std::cout << "Employee destructor called!\n"; }

void Employee::setName(const std::string &empName) { this->name = empName; }
void Employee::setEmployeeNumber(int empNumber) { this->employeeNumber = empNumber; }
void Employee::setHireDate(const std::string &empHireDate) { this->hireDate = empHireDate; }

 
std::string Employee::getName() const { return this->name; }
int Employee::getEmployeeNumber() const { return this->employeeNumber; }
std::string Employee::getHireDate() const { return this->hireDate; }