#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"

class ShiftSupervisor : public Employee {
    private:
        float annualSalary;
        float annualBonus;
    public:
        ShiftSupervisor();
        ShiftSupervisor(std::string empName, int empNumber, std::string empHireDate, float salary, float bonus);

        void setAnnualSalary(float salary);
        void setAnnualBonus(float bonus);

        float getAnnualSalary() const;
        float getAnnualBonus() const;

        friend std::ostream& operator<<(std::ostream& COUT, const ShiftSupervisor& employee);
};

#endif