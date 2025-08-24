#include <iostream>

const int SIZE= 3;
const int ROW= SIZE;
const int COL= SIZE;

void snail(int arr[ROW][COL], int size);

int main() 
{
    int* snailArr= nullptr;
    int arr[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    snail(arr, SIZE);

    return 0;
}

void snail(int arr[ROW][COL], int size){

}