#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(){
    std::cout<<"Constructor called\n";
}
Rectangle::Rectangle(Rectangle& arg){
    width=arg.width;
    height=arg.height;
}
Rectangle::Rectangle(int w, int h){
    // if within range of 1-100
    if(w>=1 && w<=100 && h>=1 && h<=100){
        width=w;
        height=h;
    } else {
        std::cout<<"Setting width and height to 1\n";

        width=1;
        height=1;
    }
}
std::ostream& operator<<(std::ostream &strm, const Rectangle &rect){
    strm << "Width: " << rect.width << "\nHeight: " << rect.height;
    return strm;
}
std::istream& operator>>(std::istream &strm, Rectangle &rect){
    bool isInvalid=true;

    do {
        std::cout<<"Enter width (1-100): ";
        std::cin>>rect.width;

        if(rect.width>=1 && rect.width<=100) isInvalid=false;
        else std::cout<<"The width has to be in range.\n";
    } while(isInvalid);

    do {
        std::cout<<"Enter height (1-100): ";
        std::cin>>rect.height;

        if(rect.height>=1 && rect.height<=100) isInvalid=false;
        else std::cout<<"The width has to be in range.\n";
    } while(isInvalid);

    return strm;
}
Rectangle& Rectangle::operator+=(const Rectangle &right){
    width+=right.width;
    height+=right.height;

    return *this;
}
Rectangle& Rectangle::operator-=(const Rectangle &right){
    width-=right.width;
    height-=right.height;

    return *this;
}