#include "Employee.h"
#include "CommissionEmployee.h"
#include "Manager.h"

void showenumdata(enum DEPARTMENTS dept)
{
    if (dept == DEPARTMENTS ::MARKETING)
        std::cout << "Department : Marketing ";
    else if (dept == DEPARTMENTS::SALES)
        std::cout << "Department : Sales";
    else if (dept == DEPARTMENTS::RECRUTING)
        std::cout << "Department : Recruting";
}

int main()
{
    //emp1 object object created on heap
    Employee *Emp1 = new CommissionEmployee("Shubham", "Dhanore", "A4", 32455, 102, 8.19);
    
    Emp1->Print();
    Emp1->CalculateEarnings();

    //emp2 object object created on heap
    Employee *Emp2 = new Manager("Rahul", "Joshi", "A9", 151405, "Man", DEPARTMENTS ::RECRUTING, 14, 8);
    
    Emp2->Print();
    Emp2->CalculateEarnings();
    std::cout << Emp1->calculateInsurance(5, 9000);

    //freeing allocated memory on heap
    delete Emp1;
    delete Emp2;
    return 0;
}