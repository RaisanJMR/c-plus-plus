#include <iostream>
using namespace std;

int search(int A[], int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int m = start + (end - start) / 2;
    if (A[m] == target)
    {
        return m;
    }
    if (target < A[m])
    {
        return search(A, target, start, m - 1);
    }
    return search(A, target, m + 1, end);
}

int main()
{
    int A[] = {2, 18, 26, 44, 52, 86, 91};
    int result = search(A, 18, 0, 7);
    cout << result << endl;
    return 0;
}