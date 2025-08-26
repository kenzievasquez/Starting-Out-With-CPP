#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H 

#include "Employee.h"
#include <string>

class ProductionWorker : public Employee {
    private:
        int shift; // 1 for day, 2 for night
        double hourlyPayRate;

    public:
        ProductionWorker();
        ProductionWorker(std::string empName, int empNumber, std::string empHireDate, int empShift, double empHourlyPayRate);
        virtual ~ProductionWorker(); 

        void setShift(int empShift);
        void setHourlyPayRate(double empHourlyPayRate);

        int getShift() const;
        double getHourlyPayRate() const;

        std::string getShiftName() const;

        friend std::ostream& operator<<(std::ostream& COUT, const ProductionWorker& worker);
};

#endif