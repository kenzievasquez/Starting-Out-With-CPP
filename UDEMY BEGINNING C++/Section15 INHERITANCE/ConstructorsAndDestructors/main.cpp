// Section 15
// Constructors and Destructors
#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
   Base() : value{0} { cout << "Base default constructor" << endl; }
   Base(int x) : value{x} { cout << "Base (int) overloaded constructor" << endl; }
   ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base {
    //using Base::Base;

private:
    int doubled_value;
public:
    Derived() : Base(), doubled_value {0} { cout << "Derived default constructor " << endl; } 
    //Derived(int doubled) : Base(), doubled_value { doubled*2 }  { cout << "Derived (int) overloaded constructor" << endl; }
    Derived(int doubled, int val) : Base(val), doubled_value { doubled*2 }  { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor " << endl; } 
};

int main() {
//   Base b;
//    Base b{100};
 //   Derived d;
 Derived d {1000};
    
    return 0;
}