#include <iostream>
#include <string>
#include "Student.h"

int Student::roll = 100;

int Student::count = 0;

void Student::show() const
{
    std::cout << "Student Roll No:" << roll_no << std::endl;
    std::cout << "Studen Name:" << st_name << std::endl;
    std::cout << "Student class:" << st_class << std::endl;
    std::cout << "Student grade:" << grade << std::endl;
    std::cout << std::endl;
}

void Student::printCount()

{
    std::cout << count << std::endl;
}
