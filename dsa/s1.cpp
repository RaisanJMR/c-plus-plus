// Array based implementation of stack
#include <iostream>
using namespace std;

#define MAX_SIZE 101

int A[MAX_SIZE];

int top = -1;

void Push(int x)
{
    if (top == MAX_SIZE - 1)
    {
        cout << "Error" << endl;
    }

    A[++top] = x;
}

void Pop()
{
    if (top == -1)
    {
        cout << "No element to pop" << endl;
        return;
    }
    top--;
}
// Return the value at top index
int Top()
{
    return A[top];
}

void Print()
{
    cout << "Stack is:" << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << A[i] << endl;
    }
}
int main()
{
    Push(2);
    Push(5);
    Push(10);
    Push(6);
    Push(4);
    // Pop();
    Print();
    return 0;
}