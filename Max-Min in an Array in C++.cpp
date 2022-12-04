// Online C++ compiler to run C++ program online
    #include <iostream>
    using namespace std;
// Function to traverse Array Elements
void printArray(int arr[], int size)
{
    cout << "printing the array elements" << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "printing done";
}
int printMaxNum(int arr[], int size)
{
    int max;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int printMinNum(int arr[], int size)
{
    int min;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    // initializing array without any data
    int number[15] = {10, 12, 13};
    printArray(number, 3);
    int max = printMaxNum(number, 3);
    int min = printMinNum(number, 3);

    cout << "the Minimum Number in Array is" << min << endl;
    cout << "the Maximum Number in Array is" << max << endl;

    return 0;
}
