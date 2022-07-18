#include <bits/stdc++.h>
using namespace std;

//  0  1  1  2  3  5  8  14

// int Fib(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     int f1, f2, f;
//     f1 = 0;
//     f2 = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         f = f1 + f2;
//         f1 = f2;
//         f2 = f;
//     }
//     return f;
// }

int Fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    int n;
    cout << "give me an n:" << endl;
    cin >> n;
    int result = Fib(n);
    cout << result << endl;
    return 0;
}