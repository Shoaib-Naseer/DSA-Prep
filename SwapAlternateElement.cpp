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

void swapAlternateElement(int arr[], int size)
{
    for (int start = 0; start <= size; start += 2)
    {
        int temp = arr[start];
        arr[start] = arr[start + 1];
        arr[start + 1] = temp;
    }

    printArray(arr, 10);
}

int main()
{
    // initializing array without any data
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(arr1, 10);
    swapAlternateElement(arr1, 10);

    return 0;
}
