#include <iostream>
#include "complex.h"

int main()
{
    Complex obj1;
    Complex obj2;
    Complex obj3;

    obj1.accept();
    obj2.accept();

    obj3 = obj1 + obj2;
    obj3.display();

    obj3 = obj1 - obj2;
    obj3.display();

    obj2 = -obj1;
    obj2.display();

    if (obj1 == obj2)
    {
        std::cout << "obj1 and obj2 are equal" << std::endl;
    }
    else
    {
        std::cout << "obj1 and obj2 are not equal" << std::endl;
    }

    if (obj1 != obj2)
    {
        std::cout << "obj1 and obj2 are not equal" << std::endl;
    }
    else
    {
        std::cout << "obj1 and obj2 are equal" << std::endl;
    }

    return 0;
}
