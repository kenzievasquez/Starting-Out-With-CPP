// pg.887

#include "Date.h"
#include <iostream>
#include <string>

unsigned short Date::daysMonth[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date(){
}
Date::Date(unsigned short m, unsigned short d, unsigned short yr){
    month=m;
    day=d;
    year=yr;
}

Date Date::operator++(){    // prefix
    ++day;
    simplify();
    return *this;
}
Date Date::operator++(int){ // postfix
    Date temp(month, day, year);
    day++;

    simplify();
    return temp;
}
Date Date::operator--(){    // prefix
    --day;
    simplify();
    return *this;
}
Date Date::operator--(int){ // postfix
    Date temp(month, day, year);
    day--;
    simplify();
    return temp;
}
Date Date::operator-(Date& right){ // pg.840
    Date temp;

    temp.day = day - right.day;
    temp.simplify();

    return temp;
}

std::ostream& operator<<(std::ostream&, const Date&);
std::istream& operator>>(std::ostream&, Date&);

void Date::simplify(){
    if (day==65535 || day==0) {
        day=this->dayInMonth();
        
        --month;
        if (month==65535 || month==0) {
            month=12;
            --year;
        }
    }

    if(day>daysMonth[month-1]){
        day-=daysMonth[month-1];
        month++;
    }

    if(month==0) month=1;
    else if (month==13) month=1;
}
unsigned short Date::dayInMonth(){
    unsigned short dayNum;

    switch(month){
        case 1:  dayNum=daysMonth[0];  break;
        case 2:  dayNum=daysMonth[1];  break;
        case 3:  dayNum=daysMonth[2];  break;
        case 4:  dayNum=daysMonth[3];  break;
        case 5:  dayNum=daysMonth[4];  break;
        case 6:  dayNum=daysMonth[5];  break;
        case 7:  dayNum=daysMonth[6];  break;
        case 8:  dayNum=daysMonth[7];  break;
        case 9:  dayNum=daysMonth[8];  break;
        case 10: dayNum=daysMonth[9];  break;
        case 11: dayNum=daysMonth[10]; break;
        case 12: dayNum=daysMonth[11]; break;
        default: std::cout<<"Control reaches end of dayInMonth function."<<std::endl;
    }

    return dayNum;
}
void Date::setDate(unsigned short m, unsigned short d, unsigned short yr){ //set date: (day, month, year)
    month=m;
    day=d;
    year=yr;
}
void Date::printForm1(){
    std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
}
void Date::printForm2(){
    std::string str;

    switch(month){
        case 1:  str="January"; break;
        case 2:  str="February"; break;
        case 3:  str="March"; break;
        case 4:  str="April"; break;
        case 5:  str="May"; break;
        case 6:  str="June"; break;
        case 7:  str="July"; break;
        case 8:  str="August"; break;
        case 9:  str="September"; break;
        case 10: str="October"; break;
        case 11: str="November"; break;
        case 12: str="December"; break;
        default: std::cout<<"Month: "<<month<<std::endl;
    }

    std::cout<<str<<" "<<day<<", "<<year<<"\n";
}
void Date::printForm3(){
    std::string str;

    switch(month){
        case 1:  str="January"; break;
        case 2:  str="February"; break;
        case 3:  str="March"; break;
        case 4:  str="April"; break;
        case 5:  str="May"; break;
        case 6:  str="June"; break;
        case 7:  str="July"; break;
        case 8:  str="August"; break;
        case 9:  str="September"; break;
        case 10: str="October"; break;
        case 11: str="November"; break;
        case 12: str="December"; break;
    }

    std::cout<<day<<" "<<str<<" "<<year<<"\n";
}
