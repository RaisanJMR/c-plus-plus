#include <iostream>
using namespace std;

int decrement(int n)
{
    if (n == 0)
    {
        return n;
    }
    cout << n << endl;
    return decrement(--n);
}
int main()
{
    int ans = decrement(5);
    cout << ans << endl;
    return 0;
}