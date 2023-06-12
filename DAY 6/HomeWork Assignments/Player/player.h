#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int age;

public:
    Player(const std::string &name, int age);
    void displayInfo();
};

#endif // PLAYER_H
