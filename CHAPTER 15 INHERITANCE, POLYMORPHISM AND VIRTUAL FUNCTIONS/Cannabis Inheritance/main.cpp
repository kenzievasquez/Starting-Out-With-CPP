#include "Hemp.h"  
#include "Sativa.h"
#include <iostream>
#include <string>

class Square {
    private:
    double side;

    public:
    Square(double s = 0.0) : side(s) {}

    void setSide(double side) { 
        if(side >= 0)
            this->side = side; 
    }
    double getSide() const { return this->side; }
    double getArea() const { return this->side * this->side; }
};

std::ostream& operator<<(std::ostream& COUT, const Square& sq) {
    COUT << sq.getArea() << "\n";
    return COUT;
}

int main() {
    Sativa favorite = Sativa("Blue Dream", 18.5, 0.1);

    std::cout << favorite << std::endl;

    return 0;
}