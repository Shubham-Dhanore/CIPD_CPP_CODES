#include<iostream>
#include"EngineeringStudent.h"

class MedicalStudent:public Student
{
    public:
      void operate()
      {
        
      }
};

int main()
{
    // EngineeringStudent es1;
    // es1.display();

    // int arr[5]={44,55,66,46,77};
    // EngineeringStudent es2(211,"Yash",arr,75,90);
    // es2.display();

//LHS      - pointer to base class Student
//RHS      - object of derived class EngineeringStudent
/*
     compile time check: - It checks if fun display() is present is LHS side class 
                     No- compile time error
                     Yes-> Go ahead
                           run time check: 
                           i) checks if fun display() is marked virtual in LHS side class
                              No: it calls fun from LHS side class
                              Yes: it calls fun from RHS side class 
*/
    Student *s=new EngineeringStudent;
    s->display();
    s->calculateScore();

    delete s;// request to call destructor
   
    // EngineeringStudent *esptr = dynamic_cast<EngineeringStudent*>(s); //down cast
    // if(!esptr)
    //     esptr->childfunction();
    // else
    //     std::cout<<"casting failure ";



    // Student *st=new MedicalStudent;
    // EngineeringStudent *esptr2 = dynamic_cast<EngineeringStudent*>(st); //down cast
    // std::cout<<esptr2;

    // int a=10;
    // int *p1=&a;
    // int *ptr=p1;

    return 0;
}