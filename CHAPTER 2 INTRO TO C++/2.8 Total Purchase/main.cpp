// 2.8 Total Purchase (pg.80) - 9/4/2025
// Sneak peek at 3.7 Formatting Output (pg.108)
#include <iostream>
#include <iomanip>

int main(){
    float item1=15.95,
          item2=24.95,
          item3=6.95,
          item4=12.95,
          item5=3.95,
          subtotal=item1+item2+item3+item4+item5,
          tax=7/100.f,
          salesTax=subtotal*tax,
          total=subtotal+salesTax;

    std::cout << std::fixed;
    std::cout << "item1:    $" << std::right << std::setw(5) << std::setprecision(2) << item1 << "\n";
    std::cout << "item2:    $" << std::right << std::setw(5) << std::setprecision(2) << item2 << "\n";
    std::cout << "item3:    $" << std::right << std::setw(5) << std::setprecision(2) << item3 << "\n";
    std::cout << "item4:    $" << std::right << std::setw(5) << std::setprecision(2) << item4 << "\n";
    std::cout << "item5:    $" << std::right << std::setw(5) << std::setprecision(2) << item5 << "\n";
    std::cout << "Subtotal: $" << std::right << std::setw(5) << std::setprecision(2) << subtotal << "\n";
    std::cout << "\nTaxes: (" << tax*100 << "%) - $" << std::setprecision(2) << salesTax << "\n";
    std::cout << "TOTAL:    $" << std::right << std::setw(5) << std::setprecision(2) << total << "\n";

    return 0;
}
