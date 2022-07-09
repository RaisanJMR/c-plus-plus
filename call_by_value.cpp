#include <iostream>
#include <stdlib.h>
using namespace std;

class Swap
{

public:
    void swap1(int x, int y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
        cout << "values after swaping inside the function" << endl;
        cout << "x=" << x << "y=" << y << endl;
    }
    void swap2(int &a, int &b)
    {

        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "values after swaping inside the function" << endl;
        cout << "a=" << a << "b=" << b << endl;
    }
};

int main()
{
    Swap s1, s2;
    int choice, a, b, x, y;

    while (1)

    {

        cout << "1.call by value" << endl;
        cout << "2.call by reference" << endl;
        cout << "3.Exit" << endl;
        cout << "entre your choice" << endl;
        cin >> choice;
        switch (choice)
        {

        case 1:

            cout << "enter no 1:" << endl;
            cin >> x;
            cout << "enter no 2:" << endl;
            cin >> y;
            cout << "values before swaping" << endl;
            cout << "x=" << x << "y=" << y << endl;
            s1.swap1(x, y);
            cout << "values after swaping inside the main function" << endl;
            cout << "x=" << x << "y=" << y << endl;
            break;
        case 2:

            cout << "enter no 1:" << endl;
            cin >> a;
            cout << "enter no 2:" << endl;
            cin >> b;
            cout << "values before swaping" << endl;
            cout << "a=" << a << "b=" << b << endl;

            s2.swap2(a, b);
            cout << "values after swaping inside the main function" << endl;
            cout << "a=" << a << "b=" << b << endl;
            break;
        case 3:

            exit(0);
        default:
            cout << "wrong chioce" << endl;
        }
    }

    return 0;
}
