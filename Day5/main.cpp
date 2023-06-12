#include <iostream>
#include "flight.h"

int main()
{
    Flight f1;
    f1.feedInfo();
    f1.showInfo();

    Flight f2(7009, "Pune", 740);
    f2.showInfo();
    return 0;
}
