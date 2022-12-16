#include <iostream>
using namespace std;

int findElement(int arr[], int size, int target)
{
    if (size == 0)
    {
        return -1;
    }
    else if (arr[size - 1] == target)
    {
        return size - 1;
    }
    else
    {
        int ans = findElement(arr, size - 1, target);
        return ans;
    }
}

int main()
{
    // initializing array without any data
    int number[15] = {10, 12, 13, 14, 14, 14, 13};
    int ans = findElement(number, 7, 13);
    cout << ans;

    return 0;
}
