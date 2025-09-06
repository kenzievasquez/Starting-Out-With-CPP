// Pure Abstract Base Class Project (pg.968)
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<Circle> circ = std::make_unique<Circle>(0,0,1);
    std::unique_ptr<Rectangle> rec  = std::make_unique<Rectangle>(1,3);

    std::cout<<"Circle area: "<<circ->getArea()<<"\n";
    std::cout<<"Rectangle area: "<<rec->getArea()<<"\n";

    return 0;
}
