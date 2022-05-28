#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p;
    int **q;
    p = &a;
    q = &p;
    cout << "value of a is: " << a << endl;
    cout << "Address of a is: " << &a << endl;

    cout << "Address of p is: " << &p << endl;
    cout << "value of p is: " << p << endl;
    cout << "value of address pointed by p is: " << *p << endl;

    cout << "Address of q is: " << &q << endl;
    cout << "value of q is: " << q << endl;
    cout << "value of address pointed by q is: " << **q << endl;

    return 0;
}