// C++ program
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
            break;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

/* Driver program to test above function */
int main()
{
    int arr1[5] = {1, 2, 4, 5, 6};
    int arr2[6] = {2, 3, 5, 7};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Function calling

    cout << "Enter the number you want to search : ";
    int num;
    cin >> num;

    int fndElement = binarySearch(arr1, m, num);
    if (fndElement != -1)
    {
        cout << "The index of " << num << " is : " << fndElement;
    }
    else
    {
        cout << "The Number " << num << " Doesnt Exists";
    }

    return 0;
}
