// C++ program
#include <iostream>
using namespace std;
#include <vector>

int findPosition(vector<int> &arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int num = -1;
    int start = 0;
    int end = n;
    int mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    int pivot = end;
    if ((arr[pivot] <= k) && (k <= arr[n]))
    {
        bool neww = arr[pivot] <= k <= arr[n];
        start = pivot;
        end = n;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == k)
            {

                num = mid;
                break;
            }
            else if (k > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    else
    {
        start = 0;
        end = pivot - 1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == k)
            {
                num = mid;
                break;
            }
            else if (k > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return num;
}

/* Driver program to test above function */
int main()
{
    vector<int> arr = {8, 9, 2, 4, 5, 6, 7};
    int m = arr.size() - 1;
    int ans = findPosition(arr, m, 4);
    cout << ans;
    return 0;
}
