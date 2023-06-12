#include <iostream>
#include "Mystack.h"

int main() {
    Mystack stack1; // Creating object stack1 using default constructor
    stack1.accept(); 
    stack1.display(); 

    Mystack stack2(8); 
    stack2.accept(); 
    stack2.display(); 

    return 0;
}
