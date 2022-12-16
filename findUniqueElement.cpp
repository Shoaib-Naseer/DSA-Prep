#include <iostream>
using namespace std;

// Unique element find if all the other elements are occuring twice

void findUniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
}

int main()
{
    // initializing array without any data
    int number[8] = {10, 12, 13, 15, 15, 12, 12, 13};
    findUniqueElement(number, 8);
    return 0;
}
