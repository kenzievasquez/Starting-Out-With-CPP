#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <iostream>
#include <string>

const short MONTHS=12;

class DayOfYear {
    private:
        int dayOfYear;
        static std::string month[MONTHS];
        static int daysMonth[MONTHS];
    public:
        DayOfYear(int num){
            dayOfYear=num;
        }
        void setday(int num){
            dayOfYear=num;
        }
        std::string print(){
            int count=dayOfYear;
            
            for(int i=0; i<MONTHS; i++){
                if(count <= daysMonth[i]) return month[i] + " " + std::to_string(count);

                count -= daysMonth[i];
            }
            return "Invalid.";
        }
};

std::string DayOfYear::month[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                         "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

int DayOfYear::daysMonth[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

#endif