#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count = 0;
    for (int i = 6; i < n; i++)
    {
        count++;
        cout << i << endl;
    }
    // cout << "COUNT=" << count << endl;
    return 0;
}