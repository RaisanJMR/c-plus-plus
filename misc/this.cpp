#include <iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
    int x;

public:
    void setData(int x)
    {
        this->x = x;
    }
    void printData() { cout << "x = " << x << endl; }
};

int main()
{
    Test obj;
    int x = 20;
    obj.setData(x);
    obj.printData();
    return 0;
}
