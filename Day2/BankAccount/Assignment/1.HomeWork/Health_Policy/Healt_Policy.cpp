#include <iostream>
#include <string>
#include "Health_Policy.h"

int H_policy::P_id = 23000;
int H_policy::count = 0;

void H_policy::show() const
{
        std::cout << "policy Id" << policy_id << std::endl;
        std::cout << "policy holder Name" << policy_holder_name << std::endl;
        std::cout << "amount" << amount << std::endl;
        std::cout << "premium" << premium << std::endl;
}

void H_policy::printCount()
{
        std::cout << "Policy Count:" << count << std::endl;
}
