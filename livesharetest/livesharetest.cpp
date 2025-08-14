#include <iostream>

class Square {
    private:
    double length;

    public:
    Square(double _length) : length(_length) {}

    double getArea() const { return length * length; }

    class AreaSum {
        private:
        double sum;

        public:
        AreaSum(double initial) : sum(initial) {}

        AreaSum operator+(const Square& sq) const  {
            return AreaSum(sum + sq.getArea());
        }
        
        operator double() const { return sum; }
    };

    AreaSum operator+(const Square& rhs) const {
        return AreaSum(this->getArea() + rhs.getArea());
    }
};   

int main()
{
    Square sq(4.5), sq2(6.7), sq3(2.3);

    std::cout << sq + sq2 + sq3 << std::endl; 

    std::cin.get();
    return 0;
}
