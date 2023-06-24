#include <iostream>
using namespace std;

// linear search: first 2 nos. as it is then remaining are compare with them as min and max.

struct Pair
{
    int max;
    int min;
};

Pair getMaxMin(int arr[], int size)
{
    struct Pair minmax;
    int i;
    if (size == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1])
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for (i = 2; i < size; i++)
    {
        if (arr[i] > minmax.max)
            minmax.max = arr[i];
        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
        return minmax;
    }

    int main()
    {
        int arr[] = {88, 22, 66, 11, 99, 33};
        int arr_size = 6;
        struct Pair minmax = getMaxMin(arr, arr_size);
        cout << "Minimum element in array is:" << minmax.min << endl;
        cout << "Maximum element in array is:" << minmax.max << endl;
        return 0;
    }

//complexity: O(n)
//Auxiliary space: O(1)