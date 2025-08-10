#include "Month.h"
#include <string>
#include <string>

class Month;

std::ostream operator <<(std::ostream& strm, Month& obj);
std::ostream operator >>(std::ostream& strm, Month& obj);

/////////////////////////////////////////////////////////
//////////////////// PRIVATE METHODS ////////////////////
/////////////////////////////////////////////////////////

// Whether the name or monthNumber is set,
// also sets the other var (when incrementing)
void Month::adjustMonthName()
{
  // "August"
  // mN: 9
  // --> "September", mN: 9
  switch(monthNumber)
  {
    case 1:  name="January"; 
             break;
    case 2:  name="February"; 
             break;
    case 3:  name="March"; 
             break;
    case 4:  name="April"; 
             break;
    case 5:  name="May"; 
             break;
    case 6:  name="June"; 
             break;
    case 7:  name="July"; 
             break;
    case 8:  name="August"; 
             break;
    case 9:  name="September"; 
             break;
    case 10: name="October"; 
             break;
    case 11: name="November"; 
             break;
    case 12: name="December"; 
             break;
    default: name="January";
             monthNumber=1;
  }
}

////////////////////////////////////////////////////////
//////////////////// PUBLIC METHODS ////////////////////
////////////////////////////////////////////////////////

// A default constructor that sets monthNumber to 1 and name to “January.”
Month::Month()
{
  monthNumber=1;
  name="January";
}
// A constructor that accepts the name of the month as an argument. It should set name
// to the value passed as the argument and set monthNumber to the correct value.
Month::Month(std::string month)
{
  name=month;

  if (month=="January") monthNumber=1;
  else if (month=="February") monthNumber=2;
  else if (month=="March") monthNumber=3;
  else if (month=="April") monthNumber=4;
  else if (month=="May") monthNumber=5;
  else if (month=="June") monthNumber=6;
  else if (month=="July") monthNumber=7;
  else if (month=="August") monthNumber=8;
  else if (month=="September") monthNumber=9;
  else if (month=="October") monthNumber=10;
  else if (month=="November") monthNumber=11;
  else if (month=="December") monthNumber=12;
  else
  {
    std::cout<<"Name of month not set.\nSetting to January\n";
    name="January";
    monthNumber=1;
  }
}
// A constructor that accepts the number of the month as an argument. It should set
// monthNumber to the value passed as the argument and set name to the correct month
// name.
Month::Month(int month)
{
  if (month > 12 || month < 0)
  {
    monthNumber=1;
  } else {
    monthNumber=month;
  }
  adjustMonthName();
}

// Also, you should overload cout’s << operator and cin’s >> operator to work with the
// Month class. Demonstrate the class in a program.
std::ostream& operator<<(std::ostream& strm, const Month& mnth)
{
  strm<<"Name: "<<mnth.getName()<<"\nMonth number: "<<mnth.getMonthNumber()<<std::endl;
  return strm;
}
std::istream& operator>>(std::istream& strm, Month& mnth)
{
  std::cout<<"Enter a month (ex:\"January\"): ";
  strm>>mnth.name;

  return strm;
}

void Month::operator=(const Month& mnth)
{
  this->name = mnth.name;
  this->monthNumber = mnth.monthNumber;
}
// Prefix and postfix overloaded ++ operator functions that increment monthNumber
// and set name to the name of next month. If monthNumber is set to 12 when these
// functions execute, they should set monthNumber to 1 and name to “January.”
Month Month::operator++()    // prefix
{
  if(monthNumber!=12)
  {
    monthNumber++;
  } 
  else
  {
    name="January";
    monthNumber=1;
  }

  adjustMonthName();
  return *this;
}
Month Month::operator++(int) // postfix
{
  Month temp;

  if(monthNumber!=12)
  {
    monthNumber++;
    temp.setMonthNumber(monthNumber);
  } 
  else
  {
    name="January";
    monthNumber=1;
  }
  adjustMonthName();

  return temp;
}
// Prefix and postfix overloaded −− operator functions that decrement monthNumber
// and set name to the name of previous month. If monthNumber is set to 1 when these
// functions execute, they should set monthNumber to 12 and name to “December.”
Month Month::operator--()    // prefix
{
  if(monthNumber!=1)
  {
    monthNumber--;
  } 
  else
  {
    name="December";
    monthNumber=12;
  }

  adjustMonthName();
  return *this;
}
Month Month::operator--(int) // postfix
{
  Month temp;

  if(monthNumber!=1)
  {
    monthNumber--;
    temp.setMonthNumber(monthNumber);
  } 
  else
  {
    name="December";
    monthNumber=12;
  }
  adjustMonthName();

  return temp;
}

void Month::setName(std::string nm) 
{ this->name=nm; }
std::string Month::getName() const
{ return this->name; }
void Month::setMonthNumber(unsigned short monthNum) 
{ this->monthNumber=monthNum; }
int Month::getMonthNumber() const 
{ return this->monthNumber; }