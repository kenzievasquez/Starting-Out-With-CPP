#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <iostream>
#include <string>

class PersonData
{
private:
    std::string lastName;
    std::string firstName;
    std::string address;
    std::string city;
    std::string state;
    std::string zip;
    std::string phone;

public:
    PersonData(std::string last, std::string first, std::string address,
               std::string city, std::string state, std::string zip, std::string phone)
        : lastName(last), firstName(first), address(address), city(city),
          state(state), zip(zip), phone(phone) {}
    virtual ~PersonData() {}

    void setLastName(std::string last) { this->lastName = last; }
    void setFirstName(std::string first) { this->firstName = first; }
    void setAddress(std::string address) { this->address = address; }
    void setCity(std::string city) { this->city = city; }
    void setState(std::string state) { this->state = state; }
    void setZip(std::string zip) { this->zip = zip; }
    void setPhone(std::string phone) { this->phone = phone; }
    std::string getLastName() const { return this->lastName; }
    std::string getFirstName() const { return this->firstName; }
    std::string getAddress() const { return this->address; }
    std::string getCity() const { return this->city; }
    std::string getState() const { return this->state; }
    std::string getZip() const { return this->zip; }
    std::string getPhone() const { return this->phone; }
    virtual void display() const {
        std::cout << "Name: " << this->lastName << ", " << this->firstName
                  << "\nAddress: " << this->address << " " << this->city << ", " << this->state
                  << " " << this->zip << "\nPhone: " << this->phone << "\n";
    }
};

#endif

// std::boolalpha