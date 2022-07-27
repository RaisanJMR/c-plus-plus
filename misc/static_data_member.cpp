// Static data member
#include <iostream>
using namespace std;

class Item
{
    static int count;
    int number;

public:
    void getData(int a)
    {
        number = a;
        count++;
    }
    void getCount(void)
    {
        cout << "count: ";
        cout << count << endl;
    }
};
int Item ::count;
int main()
{
    Item a, b, c;

    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    cout << "After reading data" << endl;
    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}
