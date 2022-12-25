// C++ program
#include <iostream>
using namespace std;
#include <vector>
// 162. Find Peak Element
// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.

int findPivotElement(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] >= nums[0])
        {
            // It means that mid point exist in first line
            start = mid + 1;
        }
        else
        {
            // It means that mid point exist in second line
            end = mid;
        }
    }
    return end;
}

/* Driver program to test above function */
int main()
{
    cout << "working";
    vector<int> arr = {5, 6, 7, 8, 8, 9, 10, 1, 2, 3};
    int ans = findPivotElement(arr);
    cout << "The Pivot Element's Index is : " << ans << " and Element is : " << arr[ans];

    return 0;
}
