#include<iostream>
#include"Student.h"

int main(){
    student *s = new student;
    s->display();
    student s1(2,78,"Dhanore");
    s1.display();
    student s2(3,99,"Vaishav");
    s2.display();
    delete s;
    void fun();
    return 0;
}