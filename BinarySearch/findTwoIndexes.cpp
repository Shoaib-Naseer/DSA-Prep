// C++ program
#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int target)
{
    int start = 0;
    int index;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            index = mid;
            end = mid - 1;
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
    return index;
}

int lastOccurence(int arr[], int size, int target)
{
    int start = 0;
    int index;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            index = mid;
            start = mid + 1;
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
    return index;
}

/* Driver program to test above function */
int main()
{
    int arr1[10] = {1, 2, 2, 2, 2, 2, 4, 5, 5, 6};
    int arr2[6] = {2, 3, 5, 7};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Function calling

    cout << "Enter the number you want to search : ";
    int num;
    cin >> num;

    int fndElement = firstOccurence(arr1, m, num);
    if (fndElement != -1)
    {
        cout << "The first Occurence of " << num << " is : " << fndElement << endl;
    }
    else
    {
        cout << "The Number " << num << " Doesnt Exists";
    }

    int fndElement2 = lastOccurence(arr1, m, num);
    if (fndElement2 != -1)
    {
        cout << "The last Occurence of " << num << " is : " << fndElement2;
    }
    else
    {
        cout << "The Number " << num << " Doesnt Exists";
    }

    return 0;
}
