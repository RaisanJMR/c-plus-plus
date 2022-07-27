#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(3);
    d.push_front(35);

    for (int i : d)
    {
        cout << i << endl;
    }
    d.pop_back();
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << "print first index" << d.at(0) << endl;
    cout << "front: " << d.front() << endl;
    cout << "back: " << d.back() << endl;
    cout << d.empty() << endl;
    return 0;
}