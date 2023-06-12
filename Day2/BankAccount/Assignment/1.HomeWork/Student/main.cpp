#include <iostream>
#include <string>
#include "Student.h"

int main()
{
    Student s1;
    s1.show();
    Student s2("shubham", 9, 'A');
    s2.show();

    Student *s3 = new Student("Siddesh", 10, 'B');

    s3->show();

    Student starr[3]{Student("Nikhil", 10, 'C'), Student("Tejam", 10, 'A+'), Student("Ganesh", 10, 'B')};

    for (Student i : starr)
    {
        i.show();
    }
    Student *stptr = new Student[3]{Student("Nikhil", 10, 'D'), Student("Tejam", 8, 'B+'), Student("Ashish", 10, 'B')};

    for (int i = 0; i < 3; i++)
    {
        stptr[i].show();
    }

    std::cout << "Total student Enroll are:" << std::endl;
    Student::printCount();

    for (int i = 0; i < 3; i++)
    {
        delete[] stptr;
    }

    delete s3;

    return 0;
}