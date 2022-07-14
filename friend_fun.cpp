#include <bits/stdc++.h>
using namespace std;
class Largest
{
    int a, b, m;

public:
    void setData();
    friend void findMax(Largest);
};

void Largest::setData()
{
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
}

void findMax(Largest t)
{
    if (t.a > t.b)
    {
        t.m = t.a;
    }
    else
    {
        t.m = t.b;
    }
    cout << "Maximum number is: " << t.m << endl;
}

int main()
{
    Largest l;
    l.setData();
    findMax(l);
    return 0;
}