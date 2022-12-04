// To reverse an array we will swap the first element with last element and so on

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing the array elements" << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArray(arr, size);
}

int main()
{
    // initializing array without any data
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arr1, 9);
    return 0;
}
