#include <iostream>
#include <cstring>

class faculty
{
    static int idno;
    int faculty_id;
    std::string name;
    std::string post;
    std::string qualification;
    std::string address;

public:
    faculty()
    {
        idno++;
        faculty_id = idno;
        std::cout << "enter faculty id" << std::endl;
        std::cin >> faculty_id;
        std::cout << "enter faculty name" << std::endl;
        std::cin >> name;
        std::cout << "enter faculty Post" << std::endl;
        std::cin >> post;
        std::cout << "Enter Faculty Qualification" << std::endl;
        std::cin >> qualification;
        std::cout << "Enter Faculty Address" << std::endl;
        std::cin >> address;
        

    }
    faculty(std::string n, std::string p, std::string q, std::string a)
    {
        idno++;
        faculty_id = idno;
        name = n;
        post = p;
        qualification = q;
        address = a;
    }
    void display()
    {
        std::cout << "The faculty ID is " << faculty_id << std::endl;
        std::cout << "The faculty name  is " << name << std::endl;
        std::cout << "The faculty POstis " << post << std::endl;
        std::cout << "The faculty  Qualification is " << qualification << std::endl;
        std::cout << "The faculty Address is " << address << std::endl;
    }
};
int faculty::idno = 0;
int main()
{
    faculty f1;
    f1.display();

    return 0;
}