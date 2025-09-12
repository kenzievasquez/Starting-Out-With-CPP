#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
#include <iomanip>

class Time {
protected:
    int hour;
    int min;
    int sec;
    std::string ampm;
public:
    Time(int h=0, int m=0) : hour(h), min(m) {}
    virtual ~Time() = default;

    int getHour() const { return hour; }
    int getMin() const { return min; }
    int getSec() const { return sec; }
    void setAMPM(std::string ampm){ this->ampm=ampm; }
    void displayTime() const {
        std::cout<<"Time: "<<std::setw(2)<<std::setfill('0')<<this->hour<<":"
                 <<std::setw(2)<<std::setfill('0')<<this->min<<" "<<this->ampm<<"\n";
    }
};

#endif