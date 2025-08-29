#include "Employee.h"
#include "ShiftSupervisor.h"
#include <iostream>

ShiftSupervisor::ShiftSupervisor() : Employee(), annualSalary(0.f), annualBonus(0.f) {}
ShiftSupervisor::ShiftSupervisor(std::string empName, int empNumber, std::string empHireDate, float salary, float bonus)
    : Employee(empName, empNumber, empHireDate), annualSalary(salary), annualBonus(bonus) {}

void ShiftSupervisor::setAnnualSalary(float salary) { this->annualSalary= salary; }
void ShiftSupervisor::setAnnualBonus(float bonus) { this->annualBonus= bonus; }

float ShiftSupervisor::getAnnualSalary() const { return this->annualSalary; }
float ShiftSupervisor::getAnnualBonus() const { return this->annualBonus; }

std::ostream& operator<<(std::ostream& COUT, const ShiftSupervisor& supervisor) {
    COUT << "Name: " << supervisor.name
         << "\nEmployee Number: " << supervisor.employeeNumber
         << "\nHire Date: " << supervisor.hireDate
         << "\nAnnual Salary: $" << supervisor.annualSalary
         << "\nAnnual Bonus: $" << supervisor.annualBonus << std::endl;
    return COUT;
}