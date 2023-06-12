#include <iostream>
#include <string>
#include "Books.h"

int main()
{
    Books b1;
    b1.show();
    Books b2("Gulliver’s Travels", 2, 270.44);
    b2.show();

    Books *b3 = new Books("Gulliver’s Travels-I", 5, 344.66);

    b3->show();

    Books btarr[3]{Books("Gulliver’s Travels-II", 2, 300.00), Books("Sherlock Homes-2", 2, 390.00), Books("Sherlock Homes-3", 2, 250.00)};

    for (Books i : btarr)
    {
        i.show();
    }
    Books *btptr = new Books[3]{Books("Gulliver’s Travels-III", 5, 577.88), Books("GOT-2", 8, 345.33), Books("GOT-3", 2, 223.64)};

    for (int i = 0; i < 3; i++)
    {
        btptr[i].show();
    }

    std::cout << "Total No of book:" << std::endl;

    Books::printCount();
    for (int i = 0; i < 3; i++)
    {
        delete[] btptr;
    }
    delete b3;
    return 0;
}