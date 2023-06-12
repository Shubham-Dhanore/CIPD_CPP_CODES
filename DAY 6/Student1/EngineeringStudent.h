#ifndef ENGINEERINGSTUDENT_H
#define ENGINEERINGSTUDENT_H

#include <iostream>
#include "Student.h"

class EngineeringStudent : public Student
{
    int practicalmarks;
    int projectmarks;

public:
    EngineeringStudent();
    EngineeringStudent(int r, std::string sname, int m[], int pracmarks, int projmarks);
    ~EngineeringStudent();

    void display();
    void accept();

    int getPracticalmarks() const { return practicalmarks; }
    void setPracticalmarks(int practicalmarks_) { practicalmarks = practicalmarks_; }

    int getProjectmarks() const { return projectmarks; }
    void setProjectmarks(int projectmarks_) { projectmarks = projectmarks_; }
};

#endif // ENGINEERINGSTUDENT_H
