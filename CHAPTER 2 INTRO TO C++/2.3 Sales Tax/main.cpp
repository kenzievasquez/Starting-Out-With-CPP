// 2.3 Sales Tax (pg.79)
#include <iostream>
#include <iomanip>  // input/output manipulation for setprecision()

int main(){
    float subtotal = 95;
    float stateTaxPerc = 2;
    float cntyTaxPerc = 4;
    float stateTax = subtotal * (stateTaxPerc/100);
    float cntyTax = subtotal * (cntyTaxPerc/100);
    float total = subtotal - stateTax - cntyTax;

    std::cout << std::fixed; // prints digits in decimal
    std::cout << "Subtotal: $" << std::setprecision(2) << subtotal << std::endl;
    std::cout << "State tax: " << stateTaxPerc << "% - $" << std::setprecision(2) << stateTax << "\n";
    std::cout << "County tax: " << cntyTaxPerc << "% - $" << std::setprecision(2) << cntyTax << "\n";
    std::cout << "Total: $" << std::setprecision(2) << total << "\n";

    return 0;
}
