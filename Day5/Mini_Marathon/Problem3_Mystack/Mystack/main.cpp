#include <iostream>
#include "Mystack.h"

int main() {
    Mystack stack1; // Creating object stack1 using default constructor
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.display(); 

    stack1.pop();
    stack1.display(); 

    Mystack stack2(8);
    stack2.push(100);
    stack2.push(200);
    stack2.push(300);
    stack2.display(); 

    stack2.pop();
    stack2.display(); 

    return 0;
}
