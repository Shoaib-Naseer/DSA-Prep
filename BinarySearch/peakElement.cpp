// C++ program
#include <iostream>
using namespace std;
#include <vector>
// 162. Find Peak Element
// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.

int findPeakElement(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    int peak;
    int mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
            cout << " Insie second condition " << start << endl;
        }
        else if ((nums[mid] > nums[mid + 1]))
        {
            end = mid;
            cout << " Insie second condition " << end << endl;
        }
    }
    return end;
}

/* Driver program to test above function */
int main()
{
    vector<int> arr = {1};
    int ans = findPeakElement(arr);
    cout << ans;

    return 0;
}
