#include <iostream>
#include "flight.h"

int main()
{
    flight f1;
    f1.feedInfo();
    f1.calculate_Fuel_Quantity();
    f1.showInfo();

    flight f2(7009, "Pune", 740);
    f2.calculate_Fuel_Quantity();
    f2.showInfo();
    return 0;
}
