#include <iostream>

class Complex {
private:
   int real;
   int imaginary;

public:
   Complex() : real(0), imaginary(0) {}
   Complex(int real, int imaginary) : real(real), imaginary(imaginary) {}

   int getReal() const {
       return real;
   }

   int getImaginary() const {
       return imaginary;
   }

   void setReal(int real) {
       this->real = real;
   }

   void setImaginary(int imaginary) {
       this->imaginary = imaginary;
   }

   void display() const {
       std::cout << real << " + " << imaginary << "i" << std::endl;
   }

   void accept() {
       std::cout << "Enter the real part: ";
       std::cin >> real;
       std::cout << "Enter the imaginary part: ";
       std::cin >> imaginary;
   }

   Complex operator+(const Complex& other) const {
       int newReal = real + other.real;
       int newImaginary = imaginary + other.imaginary;
       return Complex(newReal, newImaginary);
   }

   Complex operator-(const Complex& other) const {
       int newReal = real - other.real;
       int newImaginary = imaginary - other.imaginary;
       return Complex(newReal, newImaginary);
   }

   Complex operator-() const {
       return Complex(-real, -imaginary);
   }

   bool operator==(const Complex& other) const {
       return (real == other.real) && (imaginary == other.imaginary);
   }
};

int main() {
   Complex obj1;
   Complex obj2;
   Complex obj3;

   // Example usage of the class and operators
   obj1.accept();
   obj2.accept();

   obj3 = obj1 + obj2;
   obj3.display();

   obj3 = obj1 - obj2;
   obj3.display();

   obj2 = -obj1;
   obj2.display();

   if (obj1 == obj2) {
       std::cout << "obj1 and obj2 are equal." << std::endl;
   } else {
       std::cout << "obj1 and obj2 are not equal." << std::endl;
   }

   return 0;
}
