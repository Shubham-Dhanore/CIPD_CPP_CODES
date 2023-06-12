#ifndef CRICKET_H
#define CRICKET_H
#include <iostream>
#include "player.h"

class Cricket : public Player
{
private:
    int totalRuns;
    int totalWickets;

public:
    Cricket(const std::string &name, int age, int totalRuns, int totalWickets);
    void displayInfo();
};

#endif // CRICKET_H
