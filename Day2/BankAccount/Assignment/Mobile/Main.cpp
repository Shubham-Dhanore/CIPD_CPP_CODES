#include<iostream>
#include"Mobile.h"
int main()
{
    Mobile m1;
    m1.show();
     Mobile m2(1753, "Iphone X", 1, 8888.44);
     m2.show();
     Mobile *m3 = new Mobile(5232, "Samsung", 2, 22344.66);
    m3->show();
    Mobile mtarr[3]{Mobile(4533, "Nokia", 2, 30000.00), Mobile(4342, "OnePlus 7TG", 2, 39000.00), Mobile(5234, "Iphone", 1, 122250.00)};
    for (Mobile i : mtarr)

    {
    i.show();
    }
    Mobile *mtptr = new Mobile[3]{Mobile(6324, "iphone 14", 2, 15577.88), Mobile(7234, "iphone 8plus ", 2, 23345.33), Mobile(8423, "Iphone 12 pro max", 2, 23423.64)};
    for (int i = 0; i < 3; i++)
    {
    mtptr[i].show();
    }
    void global_call();
    for (int i = 0; i < 3; i++) 
    {
     delete[] mtptr;

    }
     delete m3;
 return 0; 
}