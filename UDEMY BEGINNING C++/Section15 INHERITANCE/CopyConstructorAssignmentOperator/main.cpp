// Section 15
// Copy constructor and operator=
#include <iostream>

class Base {
private:
    int value;
public:
   Base() 
        : value {0}  { 
            std::cout << "Base no-args constructor\n"; 
    }
    Base(int x) 
        : value {x} { 
            std::cout << "int Base constructor\n";
    }
    Base(const Base &other) 
        : value {other.value} {
            std::cout << "Base copy constructor\n";     
    }

    Base &operator=(const Base &rhs)  {
        std::cout << "Base operator=\n";
        if (this == &rhs)
            return *this;
        this->value = rhs.value;
        return *this;
    }
            
   ~Base(){ std::cout << "Base destructor\n"; }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived()
        : Base {}  {
            std::cout << "Derived no-args constructor\n"; 
    }
    Derived(int x) 
        : Base{x} , doubled_value {x * 2} { 
            std::cout << "int Derived constructor\n"; 
    }
    Derived(const Derived &other) 
        : Base(other), doubled_value {other.doubled_value} {
            std::cout << "Derived copy constructor\n";     
    }
    
    Derived &operator=(const Derived &rhs) {
        std::cout << "Derived operator=\n";

        if (this == &rhs)
            return *this;

        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;

        return *this;
    }
   ~Derived(){ std::cout << "Derived destructor\n"; }
};


int main() {
//    Base b {100};   // Overloaded constructor
//    Base b1 {b};    // Copy constructor
//    b = b1;          //   Copy assignment

    Derived d {100};    // Overloaded constructor
    Derived d1 {d};     // Copy constructor
    d = d1;                // Copy assignment
    
    return 0;
}