#include<iostream>
#include"Student.h"

Student::Student()
{
    std::cout<<"\nStudent ctor called ";
    rollno=1;
    studentname="Rahul";
    for(int i=0;i<5;i++)
    {
        marks[i]=0;
    }
}
Student::Student(int r,std::string sname,int m[])
{
    rollno=r;
    studentname=sname;
    for(int i=0;i<5;i++)
    {
        marks[i]=m[i];
    }
}

void Student::display()
{
    std::cout<<std::endl<<rollno<<" "<<studentname;
     for(int i=0;i<5;i++)
    {
        std::cout<<"  "<<marks[i];
    }
}
 void Student::calculateScore()
 {
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    float avg=static_cast<float>(sum)/5;
    std::cout<<"\n Average score= "<<avg;
 }
void Student::accept()
{

}
Student::~Student()
{
      std::cout<<"\n~Student dtor called ";
}






