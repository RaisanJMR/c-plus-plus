#include <iostream>
using namespace std;

// INITIALIZER LIST
class Point
{
private:
    // data members
    int x;
    int y;

public:
    // initializer list
    // used to initialize x and y values to 0
    Point(int i = 0, int j = 0) : x(i), y(j) {}

    int getX() const
    {
        return x;
    }
    int getY() const
    {
        return y;
    }
};
int main()
{
    Point t1(10, 15);
    cout << "x = " << t1.getX() << ", ";
    cout << "y = " << t1.getY();
    return 0;
}