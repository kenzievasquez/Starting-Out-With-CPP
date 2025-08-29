#include "Hemp.h"
#include <iostream>
#include <string>

Hemp::Hemp() : strain(""), cbdContent(0.0) { std::cout << "Hemp object created.\n"; }
Hemp::Hemp(std::string s, float cbd) : strain(s), cbdContent(cbd) {
    std::cout << "Hemp object created.\n";
}
Hemp::~Hemp() { std::cout << "Hemp object destroyed.\n"; }

void Hemp::setStrainName(std::string s) { this->strain = s; }
void Hemp::setCBDContent(float cbd) { this->cbdContent = cbd;}

std::string Hemp::getStrainName() const { return this->strain; }
float Hemp::getCBDContent() const { return this->cbdContent; }

std::ostream& operator<<(std::ostream &COUT, const Hemp &c) {
    COUT << "Strain: " << c.strain
         << "\nCBD Content: " << c.cbdContent << "%";
    return COUT;
}