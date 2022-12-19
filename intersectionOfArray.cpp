// C++ program to find union of
// two sorted arrays
#include <iostream>
using namespace std;
#include <vector>
/* Function prints union of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
vector<int> arrayUnion(int arr1[], int arr2[], int m, int n)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

/* Driver program to test above function */
int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Function calling
    vector<int> array_union = arrayUnion(arr1, arr2, m, n);

    cout << "\nUnion of Array is : ";
    for (auto i = array_union.cbegin(); i != array_union.cend(); ++i)
        cout << *i << " ";

    return 0;
}
