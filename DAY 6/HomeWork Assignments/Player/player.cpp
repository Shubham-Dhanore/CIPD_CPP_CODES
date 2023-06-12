#include <iostream>
#include "player.h"

Player::Player(const std::string &name, int age)
    : name(name), age(age) {}

void Player::displayInfo()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}
