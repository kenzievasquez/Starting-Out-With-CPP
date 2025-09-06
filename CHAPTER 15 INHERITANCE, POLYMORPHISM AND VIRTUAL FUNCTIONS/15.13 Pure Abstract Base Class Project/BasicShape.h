#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape {
private:
    double area;

public:
    void setArea(double a) { this->area=a; }
    double getArea() const { return this->area; };
    virtual void calcArea()=0;
};

#endif