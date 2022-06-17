// An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
// Given an array arr[] of size N, Return the index of any one of its peak elements.
// Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.

// Example 1:

// Input:
// N = 3
// arr[] = {1,2,3}
// Possible Answer: 2
// Generated Output: 1
// Explanation: index 2 is 3.
// It is the peak element as it is
// greater than its neighbour 2.
// If 2 is returned then the generated output will be 1 else 0.

// Example 2:

// Input:
// N = 2
// arr[] = {3,4}
// Possible Answer: 1
// Output: 1
// Explanation: 4 (at index 1) is the
// peak element as it is greater than
// its only neighbour element 3.
// If 2 is returned then the generated output will be 1 else 0.

#include <iostream>
using namespace std;

class Solution
{
public:
    int findPeakUtil(int arr[], int low, int high, int n)
    {
        // calculating mid
        int mid = (low + high) >> 1;

        // if mid is last or first index with first element
        // greater than next.
        // Also, check if mid element is greater than mid - 1 and mid+1
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;

        // If mid is other than 0, then check if mid element is less than prev.
        // If so, then recurse for lower half
        else if (mid > 0 && arr[mid - 1] > arr[mid])
            return findPeakUtil(arr, low, (mid - 1), n);

        // else recurse for the upper half
        else
            return findPeakUtil(arr, (mid + 1), high, n);
    }

public:
    int peakElement(int arr[], int n)
    {
        return findPeakUtil(arr, 0, n - 1, n);
    }
};

int main()
{
    // Solution ob;
    int arr[] = {8, 9, 10, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;

    return 0;
}
