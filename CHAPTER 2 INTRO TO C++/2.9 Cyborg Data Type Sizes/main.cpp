/* 2.9 Cyborg Data Type Sizes  (pg.81)
You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char, int, float, and double. You do not have any manuals, so you can’t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen.
*/
#include <iostream>

int main(){
    std::cout << "chars are stored in " << sizeof(char) << " bytes of memory.\n";
    std::cout << "ints are stored in " << sizeof(int) << " bytes of memory.\n";
    std::cout << "floats are stored in " << sizeof(float) << " bytes of memory.\n";
    std::cout << "doubles are stored in " << sizeof(double) << " bytes of memory.\n";

    return 0;
}
