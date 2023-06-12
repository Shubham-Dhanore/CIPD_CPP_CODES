#include<iostream>
#include"MyQueue.h"

int main()
{
    MyQueue queue;

        queue.enqueue(300);
        queue.enqueue(700);
        queue.enqueue(788);

        std::cout << "The Dequeued value is : " << queue.dequeue() <<"\n";
        std::cout << "The Dequeued value is : " << queue.dequeue() <<"\n";
        std::cout << "The Dequeued value is : " << queue.dequeue() <<"\n";
}