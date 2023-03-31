#include <bits/stdc++.h>

using namespace std;

int removeDuplicate(vector<int> arr, int n)
{
    int i = 0;
    int j = i + 1;

    while (j < n)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    return i + 1;
}

int main()
{
    vector<int> arr{1, 2, 2, 3, 4, 4, 5};

    int n = arr.size();

    // int findOriginalArraySize = removeDuplicate(arr, n);
    // cout << findOriginalArraySize << endl;
}