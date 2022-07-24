// find an element in an array
#include <iostream>
using namespace std;

bool find(int A[], int target, int index, int length)
{

    if (index == length)
    {
        return false;
    }
    return A[index] == target || find(A, target, index + 1, length);
}

int main()
{
    int A[] = {1, 2, 22, 9, 10};
    bool res = find(A, 44, 0, 5);
    cout << res << endl;
    return 0;
}