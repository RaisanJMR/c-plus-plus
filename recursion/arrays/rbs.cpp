#include <iostream>
using namespace std;
// Rotated Binary Search
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
    if (A[start] <= A[m])
    {
        if (target >= A[start] && target <= A[m])
        {
            return search(A, target, start, m - 1);
        }
        else
        {
            return search(A, target, m + 1, end);
        }
    }
    if (target >= A[m] && target <= A[end])
    {
        return search(A, target, m + 1, end);
    }
    return search(A, target, start, m - 1);
}

int main()
{
    int A[] = {5, 6, 7, 8, 9, 1, 2, 3};
    int result = search(A, 1, 0, 7);
    cout << result << endl;
    return 0;
}