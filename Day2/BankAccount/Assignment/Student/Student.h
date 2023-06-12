#include<iostream>

class student
{
    int student_roll_no;
    int marks;
    std::string sname;
public:
    student()
    {
        student_roll_no = 1;
        marks = 80;
        sname = "shubham";
        std::cout<<"I am inside Default COnstructor"<<std::endl;
    }
    student(int sroll_no, int mr ,std::string sn){
        student_roll_no = sroll_no;
        marks = mr;
        sname = sn;
        std::cout<<"i am in Parameterized Constructor"<<std::endl;
    }
    void display()
    {
        std::cout<<" "<<"Student Roll_no is : "<<student_roll_no<<" "<<"Marks : "<<marks<<" "<<"Student Name is : "<<sname<<std::endl;
    }

    int studentRollNo() const { return student_roll_no; }
    void setStudentRollNo(int studentRollNo) { student_roll_no = studentRollNo; }

    int getMarks() const { return marks; }
    void setMarks(int marks_) { marks = marks_; }

    std::string getSname() const { return sname; }
    void setSname(const std::string &sname_) { sname = sname_; }

};
