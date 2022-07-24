// find an element in an array
#include <iostream>
using namespace std;

bool findIndex(int A[], int target, int index, int length)
{

    if (index == length)
    {
        return -1;
    }
    if (A[index] == target)
    {
        return index;
    }
    else
    {
        return findIndex(A, target, index + 1, length);
    }
}

int main()
{
    int A[] = {1, 2, 22, 9, 10};
    bool res = findIndex(A, 10, 0, 5);
    cout << res << endl;
    return 0;
}