#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
    int real;
    int imaginary;

public:
    Complex(); // Default Constructor

    Complex(int r, int i); // Parameterized Constructor

    int getReal() const { return real; }
    void setReal(int real_) { real = real_; }

    int getImaginary() const { return imaginary; }
    void setImaginary(int imaginary_) { imaginary = imaginary_; }

    void display();

    void accept();

    Complex operator+(const Complex &other) const// + operator Overloading Function
    {
        int newReal = real + other.real;
        int newImaginary = imaginary + other.imaginary;
        return Complex(newReal, newImaginary);
    }

    Complex operator-(const Complex &other) const // - operator Overloading Function
    {
        int newReal = real - other.real;
        int newImaginary = imaginary - other.imaginary;
        return Complex(newReal, newImaginary);
    }

    Complex operator-() const //- ve  operator Overloading Function
    {
        return Complex(-real, -imaginary);
    }

    bool operator==(const Complex &other) // Is Equal Operator Overloading Function
    {
        return (real == other.real) && (imaginary == other.imaginary);
    }

    bool operator!=(const Complex &obj)// Not Equal to Operator Overloading Function
    {

        if ((this->real != obj.real) && (this->imaginary != obj.imaginary))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
#endif