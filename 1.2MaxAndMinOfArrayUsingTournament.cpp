#include <iostream>
using namespace std;

// In tournament method, divide the array into 2 , get their min and max and then compare
// the whole array and find out the whole array min and max.

struct Pair
{
    int max;
    int min;
};

struct Pair getMinMax(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr; // left and right (l and r)
    int mid;
    if (low == high)
    {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }

    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.min = arr[high];
            minmax.max = arr[low];
        }
        else
        {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        return minmax;
    }

    mid = (low + high ) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);
    // left side
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    // right side
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
}

int main()
{
    int arr[] = {12, 23, 34, 45, 56, 67, 78};
    int arr_size = 7;
    struct Pair minmax = getMinMax(arr, 0, arr_size - 1);
    cout << "Minimum element in array is:" << minmax.min << endl;
    cout << "Maximum element in array is:" << minmax.max << endl;
    return 0;
}

//complexity:O(n)
//auxiliary space:O(n log n)