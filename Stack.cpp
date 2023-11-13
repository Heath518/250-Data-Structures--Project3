#include <iostream>
#include "Stack_Header.h"
using namespace std;

Stack::~Stack()
{
    StackNode* nodePtr;
        
    while(top)
    {
        nodePtr = top;
        top = top->next;
        delete nodePtr;
    }
}

void Stack::push(int data)
{
    StackNode* newNode = new StackNode;
    StackNode* nodePtr;
    if(isEmpty())
    {
        top = newNode;
        newNode->data = data;
        newNode->next = nullptr;
    }
    
    else
    {
        newNode->data = data;
        nodePtr = top;
        top = newNode;
        newNode->next = nodePtr;
    }
}
void Stack::pop()
{
    if(isEmpty())
    {
        cout << "The stack is empty.";
    }
    
    StackNode* nodePtr;
    nodePtr = top;
    
    while(nodePtr != nullptr)
    {
        nodePtr = nodePtr->next;
        delete top;
        top = nodePtr;
    }
    
}

bool Stack::isEmpty()
{
    bool status;
    
    if(!top)
    {
        status = true;
    }
    
    else
    {
        status = false;
    }
    
    return status;
}


void Stack::display(int num)
{
    StackNode* nodePtr;
    nodePtr = top;
        
    cout << endl;
    cout << "The integer part " << num << " binary representaion is: ";
    while(nodePtr)
    {
        cout << nodePtr->data;
        nodePtr = nodePtr->next;
    }
    cout << endl;
}

