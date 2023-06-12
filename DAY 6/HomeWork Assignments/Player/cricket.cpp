#include <iostream>
#include "cricket.h"

Cricket::Cricket(const std::string &name, int age, int totalRuns, int totalWickets)
    : Player(name, age), totalRuns(totalRuns), totalWickets(totalWickets) {}

void Cricket::displayInfo()
{
    Player::displayInfo();
    std::cout << "Total Runs: " << totalRuns << std::endl;
    std::cout << "Total Wickets: " << totalWickets << std::endl;
}
