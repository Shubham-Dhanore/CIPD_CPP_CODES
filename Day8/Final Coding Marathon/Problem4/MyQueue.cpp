#include <iostream>
#include <cstring>
#include "MyQueue.h"

MyQueue::MyQueue()//Default Constructor
{
    front = -1;
    rear = -1;
}
void MyQueue::enqueue(int val)
{
    if (isFull())
    {
        std::cout << "The Queue is overflow, you cannot insert elements in Queue";
    }
    if (isEmpty())
    {
        front = 0;
    }
    rear = (rear + 1) % size;
    ptr[rear] = val;
}
int MyQueue::dequeue()
{
    if (isEmpty())
    {
        std::cout << "the Queue is underflow, you can add elemeents in queue";
    }
    int value = ptr[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
    return value;
}

bool MyQueue::isEmpty()
{
    return front == -1 && rear == -1;
}
bool MyQueue::isFull()
{
    return (rear + 1) % size == front;
}