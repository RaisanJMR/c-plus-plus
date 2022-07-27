// DEFAULT ARGUMENT
#include <bits/stdc++.h>
using namespace std;

class DefaultArg
{

public:
    // default argument
    float power(int m1, int n1 = 2);
};
float DefaultArg::power(int m1, int n1)
{
    double x = 1;
    for (int i = 0; i < n1; i++)
    {
        x = x * m1;
    }
    return x;
}

int main()
{
    DefaultArg d;
    int ch, m, n;
    while (1)
    {
        cout << "\n1.without default argument\n2.with default argument\n3.exit\nEnter your choice\n"
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value of m(base) and n(exponent)\n"
                 << endl;
            cin >> m >> n;
            cout << "\npower=" << d.power(m, n);
            break;
        case 2:
            cout << "Enter the value of m(base)\n"
                 << endl;
            cin >> m;
            cout << "\npower=" << d.power(m);
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}