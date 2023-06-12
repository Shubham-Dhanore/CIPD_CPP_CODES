#include <iostream>
#include "complex.h"

Complex::Complex() // Default Constructor
{
    real = 0;
    imaginary = 0;
}
Complex::Complex(int r, int i) : real(r), imaginary(i) {} // Parameterized Constructor

void Complex::display()
{
    std::cout << real << " + " << imaginary << "i" << std::endl;
}

void Complex::accept()
{
    std::cout << "Enter the real part: ";
    std::cin >> real;
    std::cout << "Enter the imaginary part: ";
    std::cin >> imaginary;
}
