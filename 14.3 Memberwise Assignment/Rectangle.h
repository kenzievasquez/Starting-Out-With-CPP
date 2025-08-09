#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

class Rectangle;

std::ostream &operator<<(std::ostream &, const Rectangle &);
std::istream &operator>>(std::istream &, Rectangle &);

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(Rectangle&);
        Rectangle(int, int);

        friend std::ostream& operator<<(std::ostream &, const Rectangle &);
        friend std::istream& operator>>(std::istream &, Rectangle &);
        
        Rectangle& operator+=(const Rectangle &);
        Rectangle& operator-=(const Rectangle &);

        // Pet& operator=(Pet& right);
        // dog.operator=(cat);
        // 14.26 Checkpoint: list1.operator[](25);
};

#endif