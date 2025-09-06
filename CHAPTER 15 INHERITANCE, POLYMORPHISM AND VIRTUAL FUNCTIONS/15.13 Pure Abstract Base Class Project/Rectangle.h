#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    long width;
    long length;

public:
    Rectangle(long wid, long len) : width(wid), length(len) { this->calcArea(); }
    ~Rectangle() {}

    long getWidth() const { return this->width; }
    long getLength() const { return this->length; }

    void calcArea() override { this->setArea(this->length*this->width); }
};

#endif