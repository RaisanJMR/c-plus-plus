#include <iostream>
using namespace std;

template <class T>
class Number
{
private:
    T num;

public:
    // This construct is called a Member Initializer List in C++.

    // Simply said, it initializes your member num to a value n.
    Number(T n) : num(n)
    {
        cout << "from constructor: " << n << endl;
    }

    T getNum()
    {
        return num;
    }
};
int main()
{
    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;
    return 0;
}