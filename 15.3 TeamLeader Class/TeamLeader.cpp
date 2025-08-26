#include "TeamLeader.h"
#include "ProductionWorker.h"
#include <iostream>

TeamLeader::TeamLeader() : ProductionWorker(), monthlyBonus(0), requiredTrainingHours(0), attendedTrainingHours(0) {}
TeamLeader::TeamLeader(std::string empName, int empNumber, std::string empHireDate, int empShift, double empHourlyPayRate, int empMonthlyBonus, int empRequiredTrainingHours, int empAttendedTrainingHours) : 
            ProductionWorker(empName, empNumber, empHireDate, empShift, empHourlyPayRate),
            monthlyBonus(empMonthlyBonus),
            requiredTrainingHours(empRequiredTrainingHours),
            attendedTrainingHours(empAttendedTrainingHours)  {
                std::cout << "TeamLeader constructor called.\n";
}
TeamLeader::~TeamLeader() { std::cout << "TeamLeader destructor called.\n"; }

void TeamLeader::setMonthlyBonus(int empMonthlyBonus) { this->monthlyBonus= empMonthlyBonus; }
void TeamLeader::setRequiredTrainingHours(int empRequiredTrainingHours) { this->requiredTrainingHours= empRequiredTrainingHours; }
void TeamLeader::setAttendedTrainingHours(int empAttendedTrainingHours) { this->attendedTrainingHours= empAttendedTrainingHours; }

int TeamLeader::getMonthlyBonus() const { return this->monthlyBonus; }
int TeamLeader::getRequiredTrainingHours() const { return this->requiredTrainingHours; }
int TeamLeader::getAttendedTrainingHours() const { return this->attendedTrainingHours; }

std::ostream& operator<<(std::ostream& COUT, const TeamLeader& leader) {
    COUT << "\nEmployee Name: " << leader.getName()
         << "\nEmployee Number: " << leader.getEmployeeNumber()
         << "\nHire Date: " << leader.getHireDate()
         << "\nShift: " << leader.getShiftName()
         << "\nHourly Pay Rate: $" << leader.getHourlyPayRate()
         << "\nMonthly Bonus: $" << leader.monthlyBonus
         << "\nRequired Training Hours: " << leader.requiredTrainingHours
         << "\nAttended Training Hours: " << leader.attendedTrainingHours << std::endl;
         return COUT;
}