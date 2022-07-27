#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(25);
    l.push_front(35);
    l.push_back(96);
    l.push_back(87);

    for (int i : l)
    {
        cout << i << "" << endl;
    }

    return 0;
}