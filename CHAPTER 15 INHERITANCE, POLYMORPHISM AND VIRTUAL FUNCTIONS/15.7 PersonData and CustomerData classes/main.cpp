// 15.7 PersonData and CustomerData Classes (pg.965)
#include "PersonData.h"
#include "CustomerData.h"
#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<PersonData> customer = std::make_unique<CustomerData>("Vasquez", "Kenzie", "1001 North Tustin",
                        "Santa Ana", "CA", "10001", "6191234567", 2520399, true);
    customer->display();


    return 0;
}
