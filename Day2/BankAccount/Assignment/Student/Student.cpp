#include <iostream>
#include "Student.h"

void fun()//global Function
{
    student s3;
    std::cout<<"Student Details"<<" "<<s3.studentRollNo()<<" "<<s3.getMarks()<<" "<<s3.getSname()<<std::endl;
}