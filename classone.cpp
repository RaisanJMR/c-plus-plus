#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:     
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
        cout << "C = " << c << endl;
        cout << "D = " << d << endl;
        cout << "E = " << e << endl;
    }
};
void Employee::setData(int a1, int b1, int c1)
{
    a = b1;
    b = b1;
    c = c1;
};
int main()
{
    Employee harry;

    harry.setData(1, 2, 3);
    harry.getData();
    return 0;
}