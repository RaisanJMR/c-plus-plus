#include <iostream>

using namespace std;

// function to return sum of elements in an array of size n
int sum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    return sum;
}
int main()
{
    int arr[] = {10, 20, 30, 50, 40};
    // to get number of elements in an array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n;
    cout << "Sum is: " << sum(arr, n);
    return 0;
}
