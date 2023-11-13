#include <iostream>
#include "Stack_Header.h"
#include "Queue_Header.h"
using namespace std;

//Function Prototypes
void Int2Binary(int, Stack&);
void Dec2Binary(double, Queue&);

int main()
{
    //Class objects to access the classes public functions
    Stack s_obj;
    Queue q_obj;
    
    double var;//Holds the users number
    
    cout << "Enter a decimal number." << endl;
    cin >> var;
    
    //If the number is less than zero
    while(var <= -1)
    {
        cout << endl;
        cout << "The number " << var << " is an invalid number." << endl;
        cout << "Please enter a decimal number that is zero or greater than zero." << endl;
        cin >> var;
        
    }
    
    //Set to equal the integer part of the decimal number
    int intPart = static_cast<int>(var);
    double decPart;
    
    //Set to equal the decimal part of the decimal number
    decPart = var - intPart;
    
    Int2Binary(intPart, s_obj);//Function call to convert the interger to binary then pushes it to the stack
    Dec2Binary(decPart, q_obj);//Function call to convert the decimal to binary then pushes it to the queue
    
    s_obj.display(intPart);//Display functions
    q_obj.dequeue(decPart);//Display functions
    
    return 0;
}

//Accepts a integer and then pushes its remainder into a stack
void Int2Binary(int num, Stack &obj)
{
    if (num == 0)
    {
        obj.push(num);
    }
    
    while(num > 0)
    {
        obj.push(num % 2);
        num = num / 2;
    }
    
}

//Accepts a decimal and then enqueue the decimals remainder into a queue
void Dec2Binary(double num, Queue &obj)
{
    int base = 0;//To focus the binary number to a certain amount of digits
    
    if(num == 0)
    {
        obj.enqueue(static_cast<int>(num));
    }
    
    while(num != 0 && base != 10)
    {
        num = num * 2;
        obj.enqueue(static_cast<int>(num) % 2);
        base++;
    }
        
}

