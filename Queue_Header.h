#ifndef Queue_Header_h
#define Queue_Header_h
#include <iostream>

using namespace std;

class Queue
{
private:
    struct QueueNode
    {
        double data;
        QueueNode* next;
    };
        
    QueueNode* front;
    QueueNode* rear;
    
public:
    Queue();
    ~Queue();
    bool isEmpty();// Checks to see if empty
    void enqueue(double);// Queues the a new decimal to a queue
    void dequeue(double);// Displays the queue
};


#endif /* Queue_Header_h */
