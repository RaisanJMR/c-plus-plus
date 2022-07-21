#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    int r = Fib(4);
    cout << r << endl;
    return 0;
}