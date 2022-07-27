// CALL BY VALUE & CALL BY REFERENCE

#include <bits/stdc++.h>
using namespace std;

class Swap
{

public:
    // function 1 => call by value
    void swap1(int x, int y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
        cout << "values after swaping inside function" << endl;
        cout << "x=" << x << "\n"
             << "y=" << y << endl;
    }
    // function 2 => call by reference
    void swap2(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "values after swaping inside function" << endl;
        cout << "a=" << a << "\n"
             << "b=" << b << endl;
    }
};

int main()
{
    Swap s1, s2;

    int choice, a, b, x, y;

    while (1)
    {
        cout << "1. call by value" << endl;
        cout << "2. call by reference" << endl;
        cout << "3.exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:

            cout << "enter number 1" << endl;
            cin >> x;
            cout << "enter number 2" << endl;
            cin >> y;
            cout << "values before swaping" << endl;
            cout << "x=" << x << "\n"
                 << "y=" << y << endl;
            s1.swap1(x, y);
            cout << "values after swaping" << endl;
            cout << "x=" << x << "\n"
                 << "y=" << y << endl;
            break;
        case 2:

            cout << "enter number 1" << endl;
            cin >> a;
            cout << "enter number 2" << endl;
            cin >> b;
            cout << "values before swaping" << endl;
            cout << "a=" << a << "\n"
                 << "b=" << b << endl;
            s2.swap2(a, b);
            cout << "values after swaping" << endl;
            cout << "a=" << a << "\n"
                 << "b=" << b << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "wrong choice" << endl;
            break;
        }
    }

    return 0;
}