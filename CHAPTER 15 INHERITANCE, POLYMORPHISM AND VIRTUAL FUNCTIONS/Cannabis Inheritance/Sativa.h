#ifndef SATIVA_H
#define SATIVA_H
#include "Hemp.h"
#include <iostream>
#include <string>

class Sativa : public Hemp {
    private:
    float thcContent;

    public:
    Sativa();
    Sativa(std::string s, float thc, float cbd);
    ~Sativa();

    void setTHCContent(float thc);
    
    float getTHCContent() const;

    friend std::ostream& operator<<(std::ostream &COUT, const Sativa &s);
};

#endif