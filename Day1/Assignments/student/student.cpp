#include<iostream>
using namespace std;
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
        cout<<"I am inside Default COnstructor"<<endl;
    }
    student(int sroll_no, int mr ,std::string sn){
        student_roll_no = sroll_no;
        marks = mr;
        sname = sn;
        cout<<"i am in Parameterized Constructor"<<endl;
    }
    void display()
    {
        cout<<" "<<"Student Roll_no is : "<<student_roll_no<<" "<<"Marks : "<<marks<<" "<<"Student Name is : "<<sname<<endl;
    }

    int studentRollNo() const { return student_roll_no; }
    void setStudentRollNo(int studentRollNo) { student_roll_no = studentRollNo; }

    int getMarks() const { return marks; }
    void setMarks(int marks_) { marks = marks_; }

    std::string getSname() const { return sname; }
    void setSname(const std::string &sname_) { sname = sname_; }

};

void fun()//global Function
{
    student s3;
    cout<<"Student Details"<<" "<<s3.studentRollNo()<<" "<<s3.getMarks()<<" "<<s3.getSname()<<endl;
}

int main(){
    student *s = new student;
    s->display();
    student s1(2,78,"Dhanore");
    s1.display();
    student s2(3,99,"Vaishav");
    s2.display();
    delete s;
    fun();
    return 0;
}