#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
    private:
    std::string name;
    int employeeNumber;
    std::string hireDate;
    
    public:
    Employee();
    Employee(std::string empName, int empNumber, std::string empHireDate);

    void setName(const std::string &empName);
    void setEmployeeNumber(int empNumber);
    void setHireDate(const std::string &empHireDate);

    std::string getName() const;
    int getEmployeeNumber() const;
    std::string getHireDate() const;
};

#endif