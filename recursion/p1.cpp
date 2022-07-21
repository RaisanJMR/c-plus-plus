#include <iostream>
using namespace std;

void print(int n)
{
    // termination condition
    if (n == 5)
    {
        cout << "ends" << endl;
        return;
    }
    cout << n << endl;
    print(n + 1);
}

int main()
{
    print(1);
    return 0;
}