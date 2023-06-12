#include <iostream>

class Employee
{
    std::string firstName;
    std::string lastName;
    std::string socialsecuritynumber;
    int employeeid;
    double basicsalary;
    float experience;

public:
    Employee();//default constructor
    Employee(std::string fn,std::string ln,std::string ssn,int empid,double bs,float exp){};//parameterized Constructor
    
    //Getter Setter
    std::string getFirstName() const { return firstName; }
    void setFirstName(const std::string &firstName_) { firstName = firstName_; }

    std::string getLastName() const { return lastName; }
    void setLastName(const std::string &lastName_) { lastName = lastName_; }

    std::string getSocialsecuritynumber() const { return socialsecuritynumber; }
    void setSocialsecuritynumber(const std::string &socialsecuritynumber_) { socialsecuritynumber = socialsecuritynumber_; }

    int getEmployeeid() const { return employeeid; }
    void setEmployeeid(int employeeid_) { employeeid = employeeid_; }

    double getBasicsalary() const { return basicsalary; }
    void setBasicsalary(double basicsalary_) { basicsalary = basicsalary_; }

    float getExperience() const { return experience; }
    void setExperience(float experience_) { experience = experience_; }

    void calculateEarnings();
    float calculateInsurance();
    void print();

};