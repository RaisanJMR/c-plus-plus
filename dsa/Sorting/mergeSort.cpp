#include <bits/stdc++.h>
using namespace std;

// MERGE
void Merge(int *A, int *L, int leftCount, int *R, int rightCount)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < leftCount && j < rightCount)
    {
        if (L[i] < R[j])
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }
    while (i < leftCount)
        A[k++] = L[i++];
    while (j < rightCount)
        A[k++] = R[j++];
}

// **************************************************************
// MERGE SORT
void MergeSort(int *A, int n)
{
    int mid, i, *L, *R;
    if (n <= 1)
    {
        return;
    }
    mid = n / 2;
    L = new int[mid];
    R = new int[n - mid];

    for (i = 0; i < mid; i++)
    {
        L[i] = A[i];
    }
    for (i = mid; i < n; i++)
    {
        R[i - mid] = A[i];
    }
    MergeSort(L, mid);
    MergeSort(R, n - mid);
    Merge(A, L, mid, R, n - mid);
    delete (L);
    delete (R);
}

// **************************************************************
// MAIN
int main()
{
    int A[] = {6, 2, 3, 1, 9, 10, 15, 13, 12, 17};
    int i, numberOfEl;
    numberOfEl = sizeof(A) / sizeof(A[0]);
    MergeSort(A, numberOfEl);
    for (i = 0; i < numberOfEl; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}