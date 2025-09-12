#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"
#include <iomanip>

class MilTime: public Time {
private:
    int milHours;
    int milSeconds;

public:
    MilTime(int milHrs, int milSecs) : Time(), milHours(milHrs), milSeconds(milSecs) {
        setTime();
    }

    void setTime(){
        this->hour = getStandHr();
        this->min = this->milSeconds;
    }
    int getHour()const { return milHours; }
    int getStandHr() {
        if (milHours>11){
            this->setAMPM("pm");
            return (milHours>12) ? this->milHours-12 : this->milHours;
        } else {
            this->setAMPM("am");
            return this->milHours;
        }
    }
    void displayMilTime() const { 
        std::cout<<"Military time: "<<std::setw(2)<<std::setfill('0')<<this->milHours
                 <<":"<<std::setw(2)<<std::setfill('0')<<this->milSeconds<<"\n";
    }
};

#endif