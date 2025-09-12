// 15.4 Time Format (pg.964)
#include <iostream>
#include "MilTime.h"

int main(){
    MilTime time(13,00);

    time.displayMilTime();
    time.displayTime();

    return 0;
}
