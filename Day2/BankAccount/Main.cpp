#include<iostream>
#include"BankAccount.h"

int main(){
    BankAccount::printRateofInterest();
    std::cout<<"\n\n";
    BankAccount b1,b2;
    b1.show();
    b2.show();
    const BankAccount b3;
    std::cout<<"b3 = "<<std::endl;
    b3.show();//const object can invoke/call constant function only
    return 0;
}

#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

class flight
{
private:
    int flight_num;
    std::string destination;
    float distance;
    float fuel;

public:
    flight();
    flight(int fn, const std::string &dn, float ds);
    void feedinfo();
    void showinfo();
};

#endif

#include <iostream>
#include "flight.h"

int main()
{
    flight f1;
    f1.showinfo();

    flight f2(7009, "Pune", 740);
    f2.showinfo();

    return 0;
}

#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

class flight
{
private:
    int flight_num;
    std::string destination;
    float distance;
    float fuel;

public:
    flight();
    flight(int fn, const std::string &dn, float ds);
    void feedinfo();
    void showinfo();
};

#endif
#include "flight.h"

flight::flight()
{
    flight_num = 0001;
    destination = "Mumbai";
    distance = 100;
    fuel = 200;
}

flight::flight(int fn, const std::string &dn, float ds)
{
    flight_num = fn;
    destination = dn;
    distance = ds;
    fuel = 0; // Initialize fuel to 0
}

void flight::feedinfo()
{
    std::cout << "Please enter the Flight number: ";
    std::cin >> flight_num;
    std::cout << "Please enter the Destination: ";
    std::cin >> destination;
    std::cout << "Please enter the Distance: ";
    std::cin >> distance;
}

void flight::showinfo()
{
    calculate_Fuel_Quantity(); // Call the function to calculate fuel
    std::cout << "Flight Number: " << flight_num << std::endl;
    std::cout << "Destination: " << destination << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << std::endl;
}

void flight::calculate_Fuel_Quantity()
{
    if (distance <= 1000)
    {
        fuel = 500;
    }
    else if (distance > 1000 && distance <= 2000)
    {
        fuel = 1100;
    }
    else
    {
        fuel = 2000;
    }
}
