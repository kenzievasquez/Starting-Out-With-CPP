#ifndef MONTH_H
#define MONTH_H
#include <iostream>
#include <string>

class Month 
{
  private:
    std::string name;
    unsigned short monthNumber;

    // lowercase each letter in name of month
    void adjustMonthName();

  public:
    Month();
    Month(std::string month);
    Month(int month);

    friend std::ostream& operator<<(std::ostream& strm, const Month& mnth);
    friend std::istream& operator>>(std::istream& strm, Month& mnth);

    Month operator++();    // prefix
    Month operator++(int); // postfix
    Month operator--();    // prefix
    Month operator--(int); // postfix

    void setName(std::string nm);
    std::string getName() const;
    void setMonthNumber(unsigned short monthNum);
    int getMonthNumber() const;
};

#endif