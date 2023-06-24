#include <iostream>
using namespace std;

// If n is odd then initialize min and max as the first element.
// If n is even then initialize min and max as minimum and maximum of the first two elements respectively.
// For the rest of the elements, pick them in pairs and compare their
// maximum and minimum with max and min respectively.

struct Pair
{
    int max;
    int min;
};
struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;
    if (n % 2 == 0) // even
    {
        if (arr[0] > arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i = 2;
    }

    else // odd
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1;
    }
    // compare other elements from even and odd respectively
    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
                minmax.max = arr[i];

            if (arr[i + 1] < minmax.min)
                minmax.min = arr[i + 1];
        }
        else
        {
            if (arr[i + 1] > minmax.max)
                minmax.max = arr[i + 1];

            if (arr[i] < minmax.min)
                minmax.min = arr[i];
        }
        i += 2;
    }
    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445,1, 330, 3000};
    int arr_size = 6;

    Pair minmax = getMinMax(arr, arr_size);
    cout << "Minimum element in array is:" << minmax.min << endl;
    cout << "Maximum element in array is:" << minmax.max << endl;
    return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(1) 
