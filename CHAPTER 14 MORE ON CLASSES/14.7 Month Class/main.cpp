/* 14.7 Month Class pg.886 8/5/2025 7:30pm
  Design a class named Month. The class should have the following private members:
  • name A string object that holds the name of a month, such as “January,”
  “February,” etc.
  • monthNumber An integer variable that holds the number of the month. For exam-
  ple, January would be 1, February would be 2, etc. Valid values for this variable are
  1 through 12.

  In addition, provide the following member functions:
  X A default constructor that sets monthNumber to 1 and name to “January.”
  x A constructor that accepts the name of the month as an argument. It should set name
  to the value passed as the argument and set monthNumber to the correct value.
  X A constructor that accepts the number of the month as an argument. It should set
  monthNumber to the value passed as the argument and set name to the correct month
  name.
  X Appropriate set and get functions for the name and monthNumber member variables.
  • Prefix and postfix overloaded ++ operator functions that increment monthNumber
  and set name to the name of next month. If monthNumber is set to 12 when these
  functions execute, they should set monthNumber to 1 and name to “January.”
  • Prefix and postfix overloaded −− operator functions that decrement monthNumber
  and set name to the name of previous month. If monthNumber is set to 1 when these
  functions execute, they should set monthNumber to 12 and name to “December.”

  X Also, you should overload cout’s << operator and cin’s >> operator to work with the
  Month class. Demonstrate the class in a program.
*/
#include "Month.h"
#include <iostream>

std::string getUserInput(); // Returns a string of the month

int main()
{
  std::string mnthName=getUserInput();
  Month something(mnthName);

  --something;
  std::cout << something << std::endl;

  return 0;
}

/*
  Name: setUserInput
  Input:  None
  Output: returns a string of the name of the month
*/
std::string getUserInput()
{
  unsigned short choice;
  std::string mnth;

  // Menu for month
  do
  {
    std::cout<<"Select a month.\n";
    std::cout<<"1. January\n"
              "2. February\n"
              "3. March\n"
              "4. April\n"
              "5. May\n"
              "6. June\n"
              "7. July\n"
              "8. August\n"
              "9. September\n"
              "10. October\n"
              "11. November\n"
              "12. December\n"
              "\nSelection: ";
    std::cin >> choice;
  } while(choice<1 || choice>12);
  std::cout<<"\n";

  switch(choice)
  {
    case 1: mnth="January"; break;
    case 2: mnth="February"; break;
    case 3: mnth="March"; break;
    case 4: mnth="April"; break;
    case 5: mnth="May"; break;
    case 6: mnth="June"; break;
    case 7: mnth="July"; break;
    case 8: mnth="August"; break;
    case 9: mnth="September"; break;
    case 10: mnth="October"; break;
    case 11: mnth="November"; break;
    case 12: mnth="December"; break;
  }

  return mnth;
}