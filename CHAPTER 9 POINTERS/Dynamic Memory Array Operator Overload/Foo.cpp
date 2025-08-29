#include "Foo.h"
#include <iostream>

Foo::Foo(int s=0){
    size=s;
    arr=new int[size];

    for(int i=0; i<size; i++){
        *(arr+i)=0;
    }
}
// Copy constructor
Foo::Foo(const Foo& right){
    size=right.size;
    arr=new int[size];

    for(int i=0; i<size; i++){
        *(arr+i)=*(right.arr+i);
    }
}
Foo::~Foo(){
    if(arr) delete [] arr;
}
// Deletes previous contents/memory of array 
// Sets contents of LEFT object to RIGHT
const Foo Foo::operator=(const Foo& right){
    // If the current LH object is not the same as the RH object
    // (Foo left = right)
    if(this!=&right){
        delete[] arr;

        size=right.size;
        arr=new int[size];

        for(int i=0; i<size; i++){
            *(arr+i)=*(right.arr+i);
        }
        std::cout<<std::endl;
    }
    return *this;
}
int Foo::getSize(){
    return size;
}
void Foo::fill(){
    for(int i=0; i<size; i++){
        *(arr+i)=i*i;
    }
}
void Foo::printArr(){
    for(int i=0; i<size; i++){
        std::cout<<*(arr+i)<<" ";
    }
}