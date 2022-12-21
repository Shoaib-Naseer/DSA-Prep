// C++ program for the above approach
#include <bits/stdc++.h>

using namespace std;
#include <vector>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Using Naive Approach
void sortArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Using Two pointers Approach
void sortArrayTwoPointers(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        while (arr[start] == 0 && (start < end))
        {
            start++;
        }
        while (arr[end] == 1 && (start < end))
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

// Driver code
int main()
{
    int A[] = {1, 0, 1, 0, 0, 1};
    int size = sizeof(A) / sizeof(A[0]);

    cout << "before sorting the array" << endl;
    printArray(A, size);
    sortArrayTwoPointers(A, size);
    cout << "\nafter sorting the array" << endl;
    printArray(A, size);

    return 0;
}

// This code is contributed by Samim Hossain Mondal.
