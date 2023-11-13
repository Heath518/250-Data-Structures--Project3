#include <iostream>
#include "Queue_Header.h"
using namespace std;

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}

Queue::~Queue()
{
    while(front != nullptr)
    {
        QueueNode* nodePtr = front;
        front = front->next;
        delete nodePtr;
    }
}

bool Queue::isEmpty()
{
    bool status;
    
    if(!front && !rear)
    {
        status = true;
    }
    
    else
    {
        status = false;
    }
    
    return status;
}

void Queue::enqueue(double num)
{
    QueueNode* newNode = new QueueNode;
    
    if(isEmpty())
    {
        newNode->data = num;
        newNode->next = nullptr;
        front = newNode;
        rear = newNode;
        
    }
    
    else
    {
        newNode->data = num;
        newNode->next = nullptr;
        rear->next = newNode;
        rear = newNode;
    }
    
}

void Queue::dequeue(double num)
{
    if(isEmpty())
    {
        cout << "The Queue is empty.";
    }
    
    else
    {
        QueueNode* nodePtr = front;
        
        cout << "The decimal part " << num << " binary base of 10 representation is: ";
        while(nodePtr != nullptr)
        {
            cout << nodePtr->data;
            front = front->next;
            delete nodePtr;
            nodePtr = front;
        }
        cout << endl;
    }
}

