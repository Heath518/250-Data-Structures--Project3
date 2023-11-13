#ifndef Stack_Header_h
#define Stack_Header_h
#include <iostream>
using namespace std;

class Stack
{
private:
    struct StackNode
    {
        double data;
        StackNode* next;
        StackNode* prev;
    };

    StackNode* top;

public:
    Stack()
    {
        top = nullptr;
    }
    ~Stack();
    void push(int);// Adds a new integer to the stack
    void pop(); // Deletes the top integer of the stack sequentially
    void display(int num); // Displays the stack
    bool isEmpty();// Check to see if empty
};

#endif /* Header_h */
