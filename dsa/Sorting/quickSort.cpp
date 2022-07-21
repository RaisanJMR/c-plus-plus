// Quicksort
#include <iostream>
using namespace std;

// partition
int Partition(int *A, int start, int end)
{
    int pivot = A[end];
    int partitionIndex = start;
    for (int i = start; i < end; i++)
    {
        if (A[i] <= pivot)
        {
            swap(A[i], A[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(A[partitionIndex], A[end]);

    return partitionIndex;
}
// quick sort
void QuickSort(int *A, int start, int end)
{
    if (start < end)
    {
        int partitionIndex = Partition(A, start, end);
        QuickSort(A, start, partitionIndex - 1);
        QuickSort(A, partitionIndex + 1, end);
    }
}
int main()
{
    int A[] = {7, 6, 5, 8, 3, 2, 4};
// 2 3 4 8 7 6 5
    QuickSort(A, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " " << endl;
    }

    return 0;
}