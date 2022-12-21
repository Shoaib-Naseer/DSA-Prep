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

// Using Two pointers Approach
void sortArrayTwoPointers(int arr[], int size)
{
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[high], arr[mid]);
            high--;
            break;
        }
    }
}

// Driver code
int main()
{
    int A[] = {1, 0, 1, 0, 0, 1, 2, 2, 1, 2, 0};
    int size = sizeof(A) / sizeof(A[0]);

    cout << "before sorting the array" << endl;
    printArray(A, size);
    sortArrayTwoPointers(A, size);
    cout << "\nafter sorting the array" << endl;
    printArray(A, size);

    return 0;
}

// This code is contributed by Samim Hossain Mondal.
