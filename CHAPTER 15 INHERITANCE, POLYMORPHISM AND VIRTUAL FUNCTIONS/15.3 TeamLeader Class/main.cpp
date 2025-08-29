#include "ProductionWorker.h"
#include "TeamLeader.h"
#include <iostream>


int main(int argc, char const *argv[]) {
    Employee* pw = new ProductionWorker("Sebastian", 8675309, "08-19-2025", 1, 30);
    

    delete pw;

    return 0;
}

/* 
         Employee
            ^
            |
     ProductionWorker
            ^
            |
        TeamLeader
*/              