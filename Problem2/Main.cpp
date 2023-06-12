#include<iostream>

int main(){

    return 0;
}

































The Employee payroll management system is used to store data for the employee working in a company. the system will haev the functionalities to view details of an employee,calculateEarnings,calculateInsurance.
Implement class Employee with following description
A.Data Members
i. firstName of type string
ii.lastName of type string
iii.socialsecuritynumber(SSN) of type string
iv.employeeid of type int.
v.basicsalary of type double.
vi.experience of type float.

B.Member Functions.
i. default constructor
ii.parametrized constructor
iii. get function.
iv.set function.
v. Destructor.
vi. calculateEarnings - this function certainly applies generally to all employees, but each earnings calculation depends on the employee's class.make it pure virtual.
vii.float calculateInsurance(int number of FamilyMembers, float premiumRate)[use your own logic to calculate insurance amount and return it from function].
viii. print - to print employee information, Make it Virtual.

b) Implement class CommissionEmployee which derives from
Employee with following description.

A.Data Members
i.grossSales
ii.commissionRate

B.Member Functions
i.parameterized constructor
ii.default constructor
iii.get functions.
iv.set function.
v. Destructor.
vi. calculateEarnings - to calculate a CommissionEmployee's earnings.
viii.print - to output the employee's type, namely,"commission Employee:"and  employee-specific information.
c)Create enum called departments such as MARKETING,SALES,RECRUTING.
d)Implement class Manager directly inherits from class Employee.
A.Data Members
i.designation
ii.department to be created using enum.
iii.Incentive
iv.numberOfSubcordinates

B.Member Functions
i.parameterized constructor
ii.default constructor
iii.get functions.
iv.set function.
v. Destructor.
vi.calculateEarnings() - to calculate a Managers earnings based  on numberOfSubordinated and Incentive.
vii.print - to output the employee's type,namely,"Manager:"and employee-specific information.

d)creates an object of each of the two concreate classes CommissionEmployee and Manager.The program manipulates these objects,polymorphically using Employee Pointer and call calculateEarnings(),calculateInsurance() and print() function of classes using Employee pointer.
Make sure it should call destructor in appropriate order.

code should be implemented in files like employee.h , employee.cpp ,commission.h ,commission.cpp, dept.h , manager.h , manager.cpp , Main.cpp