#include<iostream>
#include"EngineeringStudent.h"

EngineeringStudent::EngineeringStudent()
{
    std::cout<<"\nEngineeringStudent ctor called ";
    practicalmarks=0;
    projectmarks=0;
}
EngineeringStudent::EngineeringStudent(int r,std::string sname,int m[],int pracmarks,int projmarks)
: Student(r,sname,m),practicalmarks(pracmarks),projectmarks(projmarks)
{
}
EngineeringStudent::~EngineeringStudent()
{
    std::cout<<"\n~EngineeringStudent dtor called ";
}
void EngineeringStudent::display()
{
     Student::display();
     std::cout<<"\npracticalmarks= "<<practicalmarks<<" projectmarks ="<<projectmarks;
}
void EngineeringStudent::accept()
{

}