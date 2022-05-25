#include <iostream>
using namespace std;

// to find the largest element in an array
// step 1: declare a variable 'max' and store first element
// in the max variable
// step 2: loop from second to last element of array
// step 3: if array element is greater than the element
// inside max re-write the element inside max

int largest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main()
{
    int arr[] = {101, 22, 58};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "largest element is: " << largest(arr, n) << endl;
    return 0;
}