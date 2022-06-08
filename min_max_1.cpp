#include <iostream>
using namespace std;

// METHOD 2 (Tournament Method)
// Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array.

struct Pair
{
    int min;
    int max;
};
Pair getMinMax(int arr[], int low, int high)
{
    Pair minmax, minmaxleft, minmaxright;
    int mid;
    // If there is only one element
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }
    // If there are more than 2 elements
    mid = (low + high) / 2;
    minmaxleft = getMinMax(arr, low, mid);
    minmaxright = getMinMax(arr, mid + 1, high);

    // Compare minimums of two parts
    if (minmaxleft.min < minmaxright.min)
        minmax.min = minmaxleft.min;
    else
        minmax.min = minmaxright.min;

    // Compare maximums of two parts
    if (minmaxleft.max > minmaxright.max)
        minmax.max = minmaxleft.max;
    else
        minmax.max = minmaxright.max;

    return minmax;
}
int main()
{
    int arr[] = {10, 201, 58, 14, 0, 558};

    int n = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, 0, n - 1);

    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max << endl;
    return 0;
}