#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape {
private:
    long centerX;
    long centerY;
    double radius;

public:
    Circle(long x, long y, double rad) : centerX(x), centerY(y), radius(rad) { this->calcArea(); }
    ~Circle() {}

    long getCenterX() const { return this->centerX; }
    long getCenterY() const { return this->centerY; }
    void calcArea() override { this->setArea(3.14159f*this->radius*this->radius); }
};

#endif