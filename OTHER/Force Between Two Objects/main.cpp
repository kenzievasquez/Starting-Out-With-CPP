#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]){
    const float G= 6.6743e-11;  // m/s^2
    double massEarth= 7.348e22;    // kg
    double massMars= 1.415e24;
    double radiusEarth= 6.378e6;   // km
    double radiusMars= 3.396e6;
    double velocity= sqrt((2.f*G*massMars)/radiusMars); // m/s
    

    // Escape velocity
    // v - sqrt((2GM)/2)
    std::cout << "Mars's escape velocity: " << velocity << " m/s\n";
    std::cout << "or "<< velocity * 2.236936 << " mph\n";

    return 0;
}
