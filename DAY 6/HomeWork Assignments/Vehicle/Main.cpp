#include <iostream>
#include "TwoWheeler.h"

int main()
{
    Vehicle *v = new Vehicle;
    v->accept();
    v->display();
    return 0;
}