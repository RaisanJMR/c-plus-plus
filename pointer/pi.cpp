#include <iostream>
using namespace std;

int main()
{
    int *A;
    int var = 5;
    A = &var;
    int *temp = A;
    cout << "address of var: " << &var << endl;
    cout << "Value of address inside A: " << *A << endl;
    cout << "address stored inside A: " << A << endl;
    cout << "Value of address inside temp: " << *temp << endl;
    cout << "address stored inside temp: " << temp << endl;
    if (A == temp)
    {
        cout << "address inside temp and A are same" << endl;
    }

    return 0;
}