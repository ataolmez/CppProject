//
// Created by ATA on 14.03.2024.
//
#include <iostream>
#include "inc/Ship.h"
#include "inc/fastship.h"
#include "inc/normalship.h"
#include "inc/strongship.h"


int main(){
    normalship obj = normalship (100,100,100,1,1);
    obj.changeMoney(30);
    std::cout<< obj.GetMoney()<<"\n";

    return 0;
}
