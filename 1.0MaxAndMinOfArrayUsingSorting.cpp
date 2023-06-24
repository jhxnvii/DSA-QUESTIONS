#include <algorithm>
#include <iostream>
using namespace std;

// If we want to return many values then we use function in form of structures and pointers.

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int arr[], int size)
{
    Pair minmax;
    sort(arr, arr + size);
    minmax.min = arr[0];
    minmax.max = arr[size - 1];
    return minmax;
}

int main()
{
    int arr[] = {22, 33, 44, 55, 66};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    Pair minmax = getMinMax(arr, arr_size);
    cout << "Minimum element in array is:" << minmax.min << endl;
    cout << "Maximum element in array is:" << minmax.max << endl;
    return 0;
}

// Complexity: o(n log n) = Min. no. of comparisons required to sort an array
// n = no. of elements
// o(1) = sorting algoirthm
