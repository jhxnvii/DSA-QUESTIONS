#include <iostream>
using namespace std;

// use start=0 and end n-1 , swap , start = start = start +1 and end = end -1

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

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    reverseArray(arr, 0, n - 1);
    cout << "Reversed array is" << endl;
    printArray(arr, n);
    return 0;
}

// Time Complexity: O(n)
// Auxiliary Space: O(1)
