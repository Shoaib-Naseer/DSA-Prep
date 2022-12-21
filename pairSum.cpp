// C++ program for the above approach
#include <bits/stdc++.h>

using namespace std;
#include <vector>

// Function to find and print pair
// Naive Approach
bool chkPair(int A[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (A[i] + A[j] == x)
            {
                return 1;
            }
        }
    }

    return 0;
}

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

vector<vector<int>> pairsum(int arr[], int size, int x)
{
    int i = 0, j = i + 1;
    vector<vector<int>> ans;
    while (i < size)
    {

        int sum = arr[i] + arr[j];
        if (sum == x)
        {
            vector<int> pair;
            pair.push_back(min(arr[i], arr[j]));
            pair.push_back(max(arr[i], arr[j]));
            ans.push_back(pair);
            i++;
            j = i + 1;
        }
        if (sum < x)
        {
            cout << "the sum is inside smaller " << sum << " And two numbers are" << arr[i] << " " << arr[j];
            cout << endl;
            j++;
        }
        if (sum > x)
        {
            cout << "the sum is inside greater " << sum << " And two numbers are" << arr[i] << " " << arr[j];
            cout << endl;
            i++;
        }
    }
    return ans;
}

// Driver code
int main()
{
    int A[] = {0, -1, 2, -3, 1, 1, -2, 3, 4, 5, -3, -1};
    int x = 0;
    int size = sizeof(A) / sizeof(A[0]);

    cout << "before sorting the array" << endl;
    printArray(A, size);
    sortArray(A, size);
    cout << "\nafter sorting the array" << endl;
    printArray(A, size);
    cout << "\nThe Pair sums are :" << endl;

    vector<vector<int>> pairsum_ = pairsum(A, size, x);
    for (int i = 0; i < pairsum_.size(); i++)
    {
        for (int j = 0; j < pairsum_[i].size(); j++)
            cout << pairsum_[i][j] << " ";
        cout << endl;
    }

    // if (chkPair(A, size, x)) {
    // 	cout << "Yes" << endl;
    // }
    // else {
    // 	cout << "No" << x << endl;
    // }

    return 0;
}

// This code is contributed by Samim Hossain Mondal.
