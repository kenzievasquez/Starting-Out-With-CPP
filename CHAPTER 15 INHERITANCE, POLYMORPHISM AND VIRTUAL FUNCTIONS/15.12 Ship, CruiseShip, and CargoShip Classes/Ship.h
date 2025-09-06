#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include <string>

class Ship {
private:
    std::string name;
    std::string year;
public:
    Ship(std::string nm="", std::string yr="") : name(nm), year(yr) {}
    ~Ship() {}

    void setName(std::string nm) { this->name=nm; }
    void setYear(std::string yr) { this->year=yr; }
    std::string getName() const { return this->name; }
    std::string getYear() const { return this->year; }

    virtual void print(){
        std::cout<<"Name: "<<this->name<<"\n";
        std::cout<<"Year: "<<this->year<<"\n";
    }
};

#endif