#include <iostream>
#include <fstream>

void writeArray(int a[], int size)
{
    std::fstream file("file.dat", std::ios::out | std::ios::binary);
    if(file)
    {
        file.write(reinterpret_cast<char*>(a), sizeof(int) * size);
        file.close();
    }
    else
        std::cerr << "ERROR!\n";
}

int main() {

    int c[] {8, 6, 7, 5, 3, 0, 9};

    writeArray(c, 7);


    return 0;
}