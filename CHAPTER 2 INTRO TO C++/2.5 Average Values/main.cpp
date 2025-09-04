#include <iostream>

int main(int argc, char const *argv[])
{
    int num1= 28,
        num2= 32,
        num3= 37,
        num4= 24,
        num5= 33,
        sum= num1+num2+num3+num4+num5;
    float average= sum/5.f;

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << average << "\n";
    
    return 0;
}
