#include "Foo.h"
#include <iostream>

int main(){
    Foo foo1(25),
        foo2(5);

    foo1.fill();
    std::cout<<"foo1: ";
    foo1.printArr();

    std::cout<<"foo2: ";
    foo2.printArr();

    return 0;
}

/*
1. 
2. 
3. 
*/