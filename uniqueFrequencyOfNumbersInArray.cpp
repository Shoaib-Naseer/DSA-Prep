// Check if frequency of each element in given array is unique or not
// C++ code for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether the
// frequency of elements in array
// is unique or not.
bool checkUniqueFrequency(int arr[],
                          int n)
{

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]] = freq[arr[i]] + 1;
    }

    unordered_set<int> uniqueFreq;
    for (auto i : freq)
    {
        int freq = i.second;
        uniqueFreq.insert(freq);
    }
    return uniqueFreq.size() == freq.size();
}

// Driver Code
int main()
{
    // Given array arr[]
    int arr[] = {1, 1, 2, 5, 5, 5};
    int n = sizeof arr / sizeof arr[0];

    // Function Call
    bool res = checkUniqueFrequency(arr, n);

    // Print the result
    if (res)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
