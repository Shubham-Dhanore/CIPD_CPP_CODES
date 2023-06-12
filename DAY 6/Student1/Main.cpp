#include <iostream>
#include "EngineeringStudent.h"

int main()
{

    Student *s = new Student;
    s->accept();
    s->display();
    s->calculateScore();
    return 0;
}