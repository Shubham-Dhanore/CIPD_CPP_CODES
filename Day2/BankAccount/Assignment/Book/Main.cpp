#include <iostream>
#include "Book.h"
int main()
{
    Books b1;
    b1.show();

    Books b2(1, "The Adventures of Pinocchio", 2, 270.44);
    b2.show();

    Books *b3 = new Books(2, "", 5, 344.66);
    b3->show();

    Books btarr[3]{
        Books(3, "Jungle Book-I", 2, 300.00),
        Books(4, "Jungle Book-II", 2, 390.00),
        Books(5, "Jungle Book-III", 2, 250.00)};

    for (Books i : btarr)
    {
        i.show();
    }

    Books *btptr = new Books[3]{
        Books(6, "Lord of Rings-I", 5, 577.88),
        Books(7, "Lord of Rings-II", 8, 345.33),
        Books(8, "Lord of Rings-III", 2, 223.64)};

    for (int i = 0; i < 3; i++)
    {
        btptr[i].show();
    }

    void global_call();

    for (int i = 0; i < 3; i++)
    {
        delete[] btptr;
    }

    delete b3;

    return 0;
}
