#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    // initializing array without any data
    int number[15] = {10, 12, 13, 15, 15, 2, 22, 12, 53, 3};
    cout << "Enter the Number to Search  ";
    int key;
    cin >> key;
    bool found = search(number, 10, key);
    if (found)
    {
        cout << "Number exist in array";
    }
    else
    {
        cout << "Number doesnt exist in array";
    }

    return 0;
}
