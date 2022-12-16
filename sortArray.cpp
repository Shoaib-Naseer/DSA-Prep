#include <iostream>
using namespace std;

void enterArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Array Element No: ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    // initializing array without any data
    int n;
    cout << "Enter the Array Size: ";
    cin >> n;

    int arr[n];
    enterArray(arr, n);
    cout
        << "Before Sorting the array : " << endl;
    printArray(arr, n);
    sortArray(arr, n);
    cout << "After Sorting the array : " << endl;
    printArray(arr, n);
    return 0;
}
