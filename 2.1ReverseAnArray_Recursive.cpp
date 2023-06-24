#include <iostream>
using namespace std;

// Initialize start and end indexes as start = 0, end = n-1 ,Swap arr[start] with arr[end]
// Recursively call reverse for rest of the array.

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
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
    printArray(arr, 6);
    reverseArray(arr, 0, 5);
    cout << "Reversed array is" << endl;
    printArray(arr, 6);
    return 0;
}

//Time Complexity: O(n)
//Auxiliary Space: O(n)
