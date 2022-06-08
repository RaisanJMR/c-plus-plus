// Recursive C++ program to reverse an array
#include <iostream>
using namespace std;
// Time Complexity : O(n)
void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";

        cout << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n - 1);

    printArray(arr, n);

    return 0;
}