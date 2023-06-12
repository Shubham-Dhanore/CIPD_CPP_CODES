#include "plants.h"
#include "indoorplants.h"

int main() {
    Plants plant("Rose", "Rose Plant");
    plant.displayInfo();
    plant.grow();

    std::cout << std::endl;

    IndoorPlants indoorPlant("Spider Plant", "Spider Plant", 1000);
    indoorPlant.displayInfo();
    indoorPlant.grow();

    return 0;
}
