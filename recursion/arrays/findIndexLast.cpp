// find an element in an array
#include <iostream>
using namespace std;

bool findIndexLast(int A[], int target, int index, int length)
{

    if (index == -1)
    {
        return -1;
    }
    if (A[index] == target)
    {
        return index;
    }
    else
    {
        return findIndexLast(A, target, index - 1, length);
    }
}

int main()
{
    int A[] = {1, 2, 22, 9, 10};
    bool res = findIndexLast(A, 25, 4, 5);
    cout << res << endl;
    return 0;
}