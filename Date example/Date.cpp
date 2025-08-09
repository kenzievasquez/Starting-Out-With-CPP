/* 14.8 Dat Class Modification (pg.887)
Modify the Date class in Programming Challenge 1 of Chapter 13. The new version
should have the following overloaded operators:
++Prefix and postfix increment operators. These operators should increment the
object's day member.
−−Prefix and postfix decrement operators. These operators should decrement the
object's day member.
−Subtraction operator. If one Date object is subtracted from another, the operator
should give the number of days between the two dates. For example, if April 10,
2014 is subtracted from April 18, 2014, the result will be 8.
<< cout’s stream insertion operator. This operator should cause the date to be dis-
played in the form

April 18, 2014

>> cin’s stream extraction operator. This operator should prompt the user for a date
to be stored in a Date object.
*/

#include <iostream>

class Date;

std::ostream& operator<<(std::ostream&, const Date&);
std::istream& operator>>(std::ostream&, Date&);

class Date {
    private:
        short month;
        short day;
        short year;
    public:
        Date(){
        }
        Date(short m, short d, short yr){
            month=m;
            day=d;
            year=yr;
        }

        Date operator++(){    // prefix
            ++day;
            simplify();
            return *this;
        }
        Date operator++(int){ // postfix
            Date temp(month, day, year);
            day++;
            simplify();
            return temp;
        }
        Date operator--(){    // prefix
            --day;
            simplify();
            return *this;
        }
        Date operator--(int){ // postfix
            Date temp(day, month, year);
            day--;
            simplify();
            return temp;
        }
        Date& operator-(Date& right){ // pg.840
            Date temp;

            temp.day = day - right.day;
            temp.simplify();

            return temp;
        }

        friend std::ostream& operator<<(std::ostream&, const Date&);
        friend std::istream& operator>>(std::ostream&, Date&);

        void simplify(){
            if(day>31){
                month+=day/31;
                if(month>12) month/=12;

                day/=31;
            } else if() {

            } else if(day==1){
                if(month>1&&month<=12) month-=1;
                else if(month) 
            }
        }
        void setDate(short m, short d, short yr){ //set date: (day, month, year)
            month=m;
            day=d;
            year=yr;
        }
        void printForm1(){
            std::cout<<month<<"/"<<day<<"/"<<year<<"\n";
        }
        void printForm2(){
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

            std::cout<<str<<" "<<day<<", "<<year<<"\n";
        }
        void printForm3(){
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

};

int main(){
    int month, day, year;
    bool isInvalid;
    Date birthday;

    /*
    {
    do {
        isInvalid=true;
        std::cout<<"Enter a month (1-12): ";
        std::cin>>month;

        if(month>=1&&month<=12) isInvalid=false;
    } while(isInvalid);

    do {
        isInvalid=true;
        std::cout<<"Enter a day (1-31): ";
        std::cin>>day;

        if(day>=1&&day<=31) isInvalid=false;
    } while(isInvalid);

    do {
        isInvalid=true;
        std::cout<<"Enter a year (1-3000): ";
        std::cin>>year;

        if(year>=1&&year<=3000) isInvalid=false;
    } while(isInvalid);
    }
    */

    //birthday.setDate(month, day, year);
    birthday.setDate(9, 1, 1996);
    
    birthday--.printForm1();
    birthday.printForm2();
    birthday.printForm3();

    std::cout<<std::endl;
    return 0;
}