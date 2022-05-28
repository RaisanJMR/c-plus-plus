#include <iostream>
using namespace std;

int main()
{
    int A[] = {1, 5, 6, 9};
    int *p = A;
    cout << p << endl; //0x7ffe8688d270
    cout << A << endl; //0x7ffe8688d270
    cout << &A[0] << endl; //0x7ffe8688d270

    return 0;
}