#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // initializing array without any data
    int number[15] = {10, 12, 13};
    int sum = sumOfArray(number, 3);
    cout << "sum of the array is " << sum << endl;
    return 0;
}
