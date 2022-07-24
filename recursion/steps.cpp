// Steps to reduce a nunber to zero
#include <iostream>
using namespace std;

int helper(int num, int steps)
{
    if (num == 0)
    {
        return steps;
    }
    if (num % 2 == 0)
    {
        return helper(num / 2, steps + 1);
    }
    return helper(num - 1, steps + 1);
}
int NumOfSteps(int num)
{
    return helper(num, 0);
}
int main()
{
    int res = NumOfSteps(41);
    cout << res << endl;
    return 0;
}