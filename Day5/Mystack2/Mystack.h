#ifndef MYSTACK_H
#define MYSTACK_H

class Mystack {
private:
    int size;
    int* pointer;

public:
    Mystack();
    Mystack(int size);
    ~Mystack();
    void accept();
    void display();
};

#endif
