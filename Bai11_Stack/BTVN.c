#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int8_t i =-1;

#define SIZE 5


/*
push() to insert an element into the stack
pop() to remove an element from the stack
top() Returns the top element of the stack.
isEmpty() returns true if stack is empty else false.
size() returns the size of stack.
*/
//returns true if stack is empty else false.
bool isEmpty()
{
    if (i==-1)
    {
        return true;
    }
    else{
        return false;
    }
}
//returns true if stack is full else false.
bool isFull()
{
    if (i==SIZE-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
//insert an element into the stack
void push(uint8_t stack[], uint8_t value)
{
    if (isFull()==true)
    {
        printf("stack is full\n");
    }
    else{
        stack[++i]=value;
    }
}
//remove an element from the stack
void pop(uint8_t stack[])
{
    if (isEmpty()==true)
    {
        printf("stack is empty\n");
    }
    else{
        stack[i--] = "\0";
    }
}
//Returns the top element of the stack
uint8_t top(const uint8_t stack[])
{
    return stack[i];
}
//returns the size of stack.
uint8_t size()
{
    return i+1;
}

int main()
{


    uint8_t stack[SIZE];

    push(stack, 15);
    push(stack, 4);
    push(stack, 3);
    push(stack, 2);
    push(stack, 50);
    pop(stack);



    printf("Top: %d\n", top(stack));
    printf("Size: %d\n", size());
    return 0;
}
