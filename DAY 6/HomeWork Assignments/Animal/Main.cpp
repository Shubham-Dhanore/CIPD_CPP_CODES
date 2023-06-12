#include<iostream>
#include "animal.h"
#include "pet.h"

int main() {
    Animal animal("Tiger", 5);
    animal.displayInfo();

    std::cout << std::endl;

    Pet pet("Dog", 3, "Buddy", "John");
    pet.displayInfo();

    return 0;
}
