// Maximum and minimum of an array using minimum number of comparisons
// Output:

// Minimum element is 1
// Maximum element is 3000
// Time Complexity: O(n)

// Auxiliary Space: O(1) as no extra space was needed.

#include <iostream>
using namespace std;

struct Pair
{
    int max;
    int min;
};
Pair getMinMax(int arr[], int size)
{
    Pair minmax;
    int i;

    // if there is only one element

    if (size == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    // if there are more than one element
    // then we are setting max and min element

    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for (i = 2; i < size; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main()
{

    int arr[] = {10};

    int n = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, n);

    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max << endl;
    return 0;
}