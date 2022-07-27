// Given an array or string, the task is to reverse the array/string.
// Input  : arr[] = {1, 2, 3}
// Output : arr[] = {3, 2, 1}

// Input :  arr[] = {4, 5, 1, 2}
// Output : arr[] = {2, 1, 5, 4}
// Time Complexity : O(n)
#include <iostream>
using namespace std;

// reverse an array
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Print an array
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

    cout << "original array is" << endl;

    printArray(arr, n);

    reverseArray(arr, 0, n - 1);

    cout << "reversed array is" << endl;

    printArray(arr, n);

    return 0;
}