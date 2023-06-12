#include <iostream>

void add(int a, int b)
{
    int sum = a + b;
    std::cout << "Sum is: " << sum << std::endl;
}

void addDouble(double x, double y)
{
    std::cout << "\n In Add/double" << std::endl;
}

void addFloat(float a, float b)
{
    float sum = a + b;
    std::cout << "Sum if 2 floats as parameters: " << sum << std::endl;
}

double addDoubleValues(double a, double b)
{
    double sum = a + b;
    std::cout << "Sum is: " << sum << std::endl;
    return sum;
}

int main()
{
    add(10, 20);
    addFloat(10.66f, 20.66f);
    addDoubleValues(10.66, 20.66);
    return 0;
}
