#include <bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    cout << "i am calculating F(" << n << ")" << endl;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int F = n * Factorial(n - 1);
        cout << "Done ! F(" << n << ")" << endl;
        return F;
    }
}

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;

    int result = Factorial(n);
    cout << "Factorial is " << result << endl;
    return 0;
}