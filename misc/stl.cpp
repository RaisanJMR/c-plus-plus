#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create a vector
    vector<int> v;
    vector<int> a(5, 1);
    cout << a.size() << endl;
    cout << "printing a " << endl;
    for (int i : a)
    {
        cout << i << "" << endl;
    }
    // cout << "Capacity " << v.capacity() << endl;
    // v.push_back(89);
    // cout << "Capacity " << v.capacity() << endl;
    // v.push_back(2);
    // cout << "Capacity " << v.capacity() << endl;
    // v.push_back(27);
    // cout << "Capacity " << v.capacity() << endl;
    // cout << "Size " << v.size() << endl;
    // cout << "element at 1nd Index" << v.at(0) << endl;
    // cout << "Front " << v.front() << endl;
    // cout << "Back " << v.back() << endl;

    // cout << "Before pop " << endl;
    // for (int i : v)
    // {
    //     cout << i << endl;
    // }
    // v.pop_back();
    // cout << "After pop " << endl;
    // for (int i : v)
    // {
    //     cout << i << endl;
    // }
    // cout << "Before clear size" << v.size() << endl;
    // v.clear();
    // cout << "After clear size" << v.size() << endl;

    return 0;
}