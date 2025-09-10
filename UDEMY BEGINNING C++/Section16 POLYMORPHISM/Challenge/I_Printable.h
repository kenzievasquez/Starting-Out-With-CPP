#ifndef I_PRINTABLE_H
#define I_PRINTABLE_H
#include <iostream>

class I_Printable {
private:

public:
virtual ~I_Printable() = default;

virtual void print(std::ostream &os) const = 0;
friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
};

#endif