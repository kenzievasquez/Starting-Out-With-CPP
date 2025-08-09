#include <iostream>
#include <string>

// Blueprint
class Vehicle
{
    private:
    std::string model;

    public:
    Vehicle() = default;
    Vehicle(std::string model)
    {
        this->model = model;
    }

    // Pure virtual functions
    // Template for the class' mechanism
    // Specification for operations to be defined in child class
    virtual void startIgnition() = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void honk() = 0;
    
    std::string getModel() const { return this->model; }
};

// class Car is the DERIVED class (CHILD Class)
// class Vehicle is the BASE class (PARENT Class)
// creates the "is-a" relationship.... A Car "is-a" Vehicle
// The relationship doesn't go both ways.... all cars are vehicles, but not all vehicles are cars
class Car : public Vehicle
{

    public:
    Car(std::string model) : Vehicle(model) {}

    // Implementation of the way the child class works 
    // (specifies from the 'template' the parent class Vehicle outlined)
    void startIgnition() override
    {
        std::cout << getModel() << " has started running!\n";
    }
    void accelerate() override
    {
        std::cout << getModel() << " started to accelerate!\n";
    }
    void brake() override 
    {
        std::cout << getModel() << " is slowing down........ stopped!\n";
    }
    void honk() override
    {
        std::cout << getModel() << " says..... HOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOONK!\n";
    }

};


int main()
{
    Vehicle* miata = new Car("Mazda");
    miata->startIgnition();
    miata->accelerate();
    miata->honk();
    miata->brake();
    delete miata;

    return 0;
}