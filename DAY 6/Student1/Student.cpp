#include <iostream>
#include "student.h"

Student::Student() // Defualt Constructor
{
    std::cout << "\nStudent Ctor called";
    rollno = 1;
    studentname = "Rahul";
    for (int i = 0; i < 5; i++)
    {
        marks[i] = 0;
    }
}
Student::Student(int r, std::string sname, int m[]) // Paramaterized Constructor
{
    rollno = r;
    studentname = sname;
    for (int i = 0; i < 5; i++)
    {
        marks[i] = m[i];
    }
}
void Student::display() // Display Function
{
    std::cout << std::endl
              << rollno << " " << studentname;

    for (int i = 0; i < 5; i++)
    {
        std::cout << " " << marks[i];
    }
}
void Student::calculateScore()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    float avg = static_cast<float>(sum) / 5;
    std::cout << "\n Average Score = " << avg;
}
void Student::accept()
{
    std::cout << "Enter the Roll no:\n";
    std::cin >> rollno;
    std::cout << "Enter the name of Student:\n";
    std::cin >> studentname;
    for(int i = 0; i< 5 ; i++){
        std::cout<<"Enter the Marks For Student:";
        std::cin>>marks[i];
    }
}
Student::~Student()
{
    std::cout << "Student Dtor Called";
}