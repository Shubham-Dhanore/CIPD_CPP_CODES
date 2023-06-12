#include <iostream>
#include <string>
#include "Mobile.h"

int main()
{

    Mobile m1;
    m1.show();
    Mobile m2("Iphone X", 1, 88976.44);
    m2.show();

    Mobile *m3 = new Mobile("phone 12 Pro max", 2, 22344.66);

    m3->show();

    Mobile mtarr[3]{Mobile("Samsung A52s", 2, 30000.00), Mobile("OnePlus 7T", 2, 39000.00), Mobile("Iphone", 1, 122250.00)};

    for (Mobile i : mtarr)
    {
        i.show();
    }
    Mobile *mtptr = new Mobile[3]{Mobile("Oppo s2", 2, 15577.88), Mobile("Realme 7", 2, 23345.33), Mobile("Redmi Note10", 2, 23423.64)};

    for (int i = 0; i < 3; i++)
    {
        mtptr[i].show();
    }

    for (int i = 0; i < 3; i++)
    {
        delete[] mtptr;
    }

    delete m3;

    return 0;
}