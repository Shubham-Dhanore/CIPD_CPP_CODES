#include<iostream>
#include"Mobile.h"
void global_call()
{

    Mobile m5(9231, "Iphone", 2, 3667.51);
    std::cout << m5.GetModelNo() << std::endl;
    std::cout << m5.GetModelName() << std::endl;
    std::cout << m5.GetSimSlot() << std::endl;
    std::cout << m5.getPrice() << std::endl;
}
