#include <iostream>
using namespace std;

int main()
{

    int var = 5;
    int *p1;
    int **p2;
    p1 = &var;
    p2 = &p1;
    cout << p1 << endl;

    cout << &var << endl;

    return 0;
}