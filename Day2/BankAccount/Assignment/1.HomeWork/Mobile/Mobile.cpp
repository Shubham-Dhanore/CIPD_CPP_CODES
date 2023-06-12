#include <iostream>
#include <string>
#include "Mobile.h"

int Mobile::mo_no = 1010;
int Mobile::count = 0;
int Mobile::discount = 20;

void Mobile::show() const
{
    std::cout << "Model NO:" << Model_no << std::endl;
    std::cout << "Model Name:" << Model_name << std::endl;
    std::cout << "Sim_slot" << sim_slot << std::endl;
    std::cout << "Price:" << price * (discount / 100) << std::endl;
}

;