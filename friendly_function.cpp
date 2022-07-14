#include <bits/stdc++.h>
using namespace std;

class ABC;

class XYZ
{
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    friend void max(XYZ, ABC);
};

class ABC
{
    int y;

public:
    void setData(int a)
    {
        y = a;
    }
    friend void max(XYZ, ABC);
};

void max(XYZ t1, ABC t2)
{
    if (t1.x > t2.y)
    {
        cout << t1.x << endl;
    }
    else
    {
        cout << t2.y << endl;
    }
}

int main()
{
    ABC abc;
    XYZ xyz;

    xyz.setData(2);
    abc.setData(8);

    max(xyz, abc);
    
    return 0;
}