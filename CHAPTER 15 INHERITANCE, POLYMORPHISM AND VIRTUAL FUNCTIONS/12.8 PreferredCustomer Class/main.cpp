// 12.8 PreferredCustomer Class (pg.966)
#include "CustomerData.h"
#include "PreferredCustomer.h"
#include "PersonData.h"
#include <iostream>
#include <memory>
#include <vector>

int main(){
    std::unique_ptr<PersonData> customer=std::make_unique<PreferredCustomer>
        ("Vasquez","Kenzie","1001 North Tustin","Santa Ana","CA",
         "10001","6191234567",2520399,true,1000);
    customer->display();

    return 0;
}
