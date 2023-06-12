#ifndef MYSTACK_H
#define MYSTACK_H

class Mystack
{
    int size;
    int *pointer;
    int top;

public:
    Mystack();
    Mystack(int size);
    ~Mystack();
    void push(int element);
    void pop();
    void display();
};

#endif
