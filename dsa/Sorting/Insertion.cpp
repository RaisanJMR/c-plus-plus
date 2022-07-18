// Insertion sort
#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int A[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int value = A[i];
        int hole = i;
        while (hole > 0 && A[hole - 1] > value)
        {
            A[hole] = A[hole - 1];
            hole = hole - 1;
        }
        A[hole] = value;
    }
}
int main()
{
    int A[] = {7, 2, 4, 1, 5, 3};
    InsertionSort(A, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << " " << endl;
    }

    return 0;
}