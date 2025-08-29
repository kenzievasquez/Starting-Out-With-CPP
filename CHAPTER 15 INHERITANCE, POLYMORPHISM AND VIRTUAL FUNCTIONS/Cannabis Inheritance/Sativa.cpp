#include "Sativa.h"
#include "Hemp.h"
#include <iostream>
#include <string>

Sativa::Sativa() : Hemp("", 0.f), thcContent(0.f) { std::cout << "Sativa object created.\n"; }
Sativa::Sativa(std::string s, float thc, float cbd) : Hemp(s, cbd), thcContent(thc) {
    std::cout << "Sativa object created.\n";
}
Sativa::~Sativa() { std::cout << "Sativa object destroyed.\n"; }

void Sativa::setTHCContent(float thc) { this->thcContent= thc; }

float Sativa::getTHCContent() const { return this->thcContent; }

std::ostream& operator<<(std::ostream &COUT, const Sativa &s) {
    COUT << s.getStrainName()
         << "\nCBD Content: " << s.getCBDContent() << "%"
         << "\nTHC Content: " << s.thcContent << "%";
    return COUT;
}