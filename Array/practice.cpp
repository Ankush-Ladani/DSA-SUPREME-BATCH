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

bool check(vector<int> arr, int n)
{
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
        count++;

    return count <= 1;
}

// int classTest(int n, vector<int> a, int k)
// {
//     vector<int> maxi{0};
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > maxi.back())
//         {
//             maxi.push_back(a[i]);
//         }
//     }
//     cout << maxi[k];
//     return maxi[k - 1];
// }

int classTest(int n, vector<int> &a, int k)
{
    // Write your code here.
    int ans = -1;
    int i = 0;
    sort(a.begin(), a.end());
    for (i = 0; i < n; i++)
    {
        if (k == n - i)
        {
            ans = a[i];
            break;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> marks{5, 4, 4, 5};

    int ans = classTest(n, marks, k);

    cout << ans;

    // vector<int> arr{1, 2, 2, 3, 4, 4, 5};

    // int n = arr.size();

    // int findOriginalArraySize = removeDuplicate(arr, n);
    // cout << findOriginalArraySize << endl;

    // ROTATE AN ARRAY BY K TIMES

    // vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    // int k;
    // cin >> k;

    // int n = arr.size();

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // vector<int> temp(n);

    // for (int i = 0; i < n; i++)
    // {
    //     temp[(i + k) % n] = arr[i];
    // }

    // arr = temp;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // vector<int> arr{3, 3};
    // int n = arr.size();

    // bool isArrayRotatedAndSorted = check(arr, n);

    // cout << isArrayRotatedAndSorted << endl;
}