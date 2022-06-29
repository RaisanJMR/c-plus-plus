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
void Top() {
    return A[top];
}
int main()
{
    return 0;
}