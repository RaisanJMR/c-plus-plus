// check an array is sorted or not
#include <iostream>
using namespace std;

bool sorted(int A[], int index, int length)
{

    if (index == length - 1)
    {
        return true;
    }
    return A[index] < A[index + 1] && sorted(A, index + 1, length);
}

int main()
{
    int A[] = {1, 2, 22, 9, 10};
    bool res = sorted(A, 0, 5);
    cout << res << endl;
    return 0;
}