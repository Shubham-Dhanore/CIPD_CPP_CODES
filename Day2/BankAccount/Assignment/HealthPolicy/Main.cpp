#include<iostream>
#include"HealthPolicy.h"
int main() {
    HealthPolicy h1, h2(5664, "Dhanore", 99);
    h1.show();
    h2.show();
    HealthPolicy *h3 = new HealthPolicy;
    h3->show();
    delete h3;
    return 0;
}
