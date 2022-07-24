#include <iostream>
using namespace std;

void print(int n)
{
    // termination condition
    if (n == 0)
    {

        return;
    }
    print(n - 1);
    cout << n << endl;
}
void printRev(int n)
{
    // termination condition
    if (n == 0)
    {

        return;
    }
    cout << n << endl;
    print(n - 1);
}
int main()
{
    printRev(5);
    // print(5);
    return 0;
}