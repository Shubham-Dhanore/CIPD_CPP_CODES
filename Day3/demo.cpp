#include <iostream>

class sample

{

    int data1, data2;

    // long double x=23241.15453645;

public:
    void set(int a, int b)

    {

        data1 = a;

        data2 = b;
    }

    void display()

    {

        std::cout << "Data1 = " << data1 << "\n";

        std::cout << "Data2 = " << data2 << "\n";
    }
};

int main()

{

    sample *s1 = new sample();

    s1->set(2, 4);

    s1->display();

    delete s1;
}