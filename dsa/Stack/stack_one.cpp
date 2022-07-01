/* C++ program to implement basic stack
operations */
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack
{
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack()
    {
        top = -1;
        
    }
    bool Push(int x);
    int Pop();
    int Peek();
    bool isEmpty();
};

bool Stack::Push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " Pushed into stack\n";
        return true;
    }
}

int Stack::Pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
int Stack::Peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Driver program to test above functions
int main()
{
    class Stack s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    s.Push(5);
    cout << s.Pop() << " Popped from stack\n";

    // print top element of stack after Poping
    cout << "Top element is : " << s.Peek() << endl;

    // print all elements in stack :
    cout << "Elements present in stack : " << endl;
    while (!s.isEmpty())
    {
        // print top element in stack
        cout << s.Peek() << " " << endl;
        // remove top element in stack
        s.Pop();
    }

    return 0;
}
