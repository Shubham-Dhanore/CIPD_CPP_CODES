#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
    int rollno;
    std::string studentname;
    int marks[5];

public:
    Student();                         // default Constructor Declaration
    Student(int r, std::string sname); // Parameterized Constructor Declaration
    Student(int r, std::string sname, int m[]);
    ~Student();
    virtual void accept();
    virtual void display();
    virtual void calculateScore();

    int getRollno() const { return rollno; }
    void setRollno(int rollno_) { rollno = rollno_; }

    std::string getStudentname() const { return studentname; }
    void setStudentname(const std::string &studentname_) { studentname = studentname_; }
};

#endif // STUDENT_H
