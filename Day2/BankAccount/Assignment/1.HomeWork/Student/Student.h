#include <iostream>
#include <string>

class Student
{
    int roll_no;
    std::string st_name;
    int st_class;
    char grade;

    static int roll;
    static int count;

public:
    Student()
    {
        roll++;
        roll_no = roll;
        st_name = "null";
        st_class = 0;
        grade = 'n';
        count++;
    }

    Student(std::string nm, int c, char g) : st_name(nm), st_class(c), grade(g)
    {
        roll++;
        roll_no = roll;
        count++;
    }

    void show() const;

    static void printCount();

    int getRollNo() const { return roll_no; }
    void setRollNo(int rollNo) { roll_no = rollNo; }

    std::string getStName() const { return st_name; }
    void setStName(const std::string &stName) { st_name = stName; }

    int getStClass() const { return st_class; }
    void setStClass(int stClass) { st_class = stClass; }

    char getGrade() const { return grade; }
    void setGrade(char grade_) { grade = grade_; }
};
