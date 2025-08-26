#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
    private:
        int monthlyBonus;
        int requiredTrainingHours;
        int attendedTrainingHours;

    public:
        TeamLeader();
        TeamLeader(std::string empName, int empNumber, std::string empHireDate, int empShift, double empHourlyPayRate, int empMonthlyBonus, int empRequiredTrainingHours, int empAttendedTrainingHours);
        ~TeamLeader();

        void setMonthlyBonus(int empMonthlyBonus);
        void setRequiredTrainingHours(int empRequiredTrainingHours);
        void setAttendedTrainingHours(int empAttendedTrainingHours);

        int getMonthlyBonus() const;
        int getRequiredTrainingHours() const;
        int getAttendedTrainingHours() const;

        friend std::ostream& operator<<(std::ostream& COUT, const TeamLeader& leader);
};

#endif