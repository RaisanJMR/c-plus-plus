// function friendly to 2 classes
#include <iostream>
using namespace std;

class ABC;
class XYZ
{

    int X;

public:
    void setvalue()
    {

        cout << "\nEnter the value of X:";
        cin >> X;
    }
    friend void max(XYZ, ABC);
};

class ABC
{

    int a;

public:
    void setvalue()
    {

        cout << "\nEnter the value of a:";
        cin >> a;
    }
    friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n)
{
    if (m.X >= n.a)
    {

        cout << "\nLargest=" << m.X;
    }
    else
    {
        cout << "\nLargest=" << n.a;
    }
}

int main()
{

    ABC abc;
    abc.setvalue();
    XYZ xyz;
    xyz.setvalue();
    max(xyz, abc);
    return 0;
}