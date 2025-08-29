#include <iostream>

class Foo {
    private:
    int x;

    protected:
    int y;

    public:
    int z;

    Foo() : x(0) { std::cout << "Foo object created.\n"; }
    virtual ~Foo() { std::cout << "Foo object destroyed.\n"; }

    void setX(int _x) { this->x = _x; }
    void setY(int _y) { this->y = _y; }

    int getX() const { return this->x ; }
    int getY() const { return this->y ; }
};

// derived class
// class access specifier
// public:     => private is private, protected is protected, public is public
// protected:  => private is private, protected is protected, public becomes protected
// private:    => everything in the derived class is private

class Bar : protected Foo {
    private:
    int w;

    public:
    Bar() : Foo() { std::cout << "Bar object created.\n"; }
    ~Bar() { std::cout << "Bar object destroyed.\n"; }

    void doSomething() { std::cout << "x: " << this->getX() << "\n"; }
};


int main()
{
    Bar b;

    std::cout << "z: " << b.z << "\n";
    
    return 0;
}
