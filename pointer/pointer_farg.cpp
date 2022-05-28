#include <iostream>

using namespace std;
// Pointer as function argument
int Increment(int *p)
{
    *p = *p + 1;
    cout << "address of a in increment:" << p << endl;
    return 0;
}
int main()
{
    // here a is local variable
    int a = 10;
    Increment(&a);
    cout << "address of a in main:" << &a << endl;
    cout << a << endl;
    return 0;
}