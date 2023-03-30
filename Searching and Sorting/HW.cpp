#include <bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int l = 0, h = arr.size() - 1;

    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    vector<int> ans;

    for (int i = l; i <= h; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main()
{
    // Find K CLosest Elements

    // class Solution
    // {
    // public:
    //     vector<int> findClosestElements(vector<int> &arr, int k, int x)
    //     {
    //         vector<int> ans;

    //         int i = 0;
    //         int j = i + 1;

    //         int count = 0;

    //         int n = arr.size();

    //         if (n == 1)
    //         {
    //             return arr;
    //         }

    //         while (j < n)
    //         {
    //             if (count <= k && ((arr[i] - x) < (arr[j] - x)) || ((arr[i] - x) == (arr[j] - x) && i < j))
    //             {
    //                 ans.push_back(arr[i]);
    //                 i++;
    //                 j++;
    //                 count++;
    //             }
    //         }

    //         return ans;
    //     }
    // };

    vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};

    int k;
    cin >> k;

    int x;
    cin >> x;

    vector<int> ans = findClosestElements(arr, k, x);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    // int i = 0;
    // int j = i + 1;

    // while (j < n)
    // {

    //     if (count <= k)
    //     {
    //         if (((arr[i] - x) < (arr[j] - x)) || ((arr[i] - x) == (arr[j] - x) && i < j))
    //         {
    //             ans.push_back(arr[i]);
    //             i++;
    //             j++;
    //             count++;
    //         }
    //     }
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << ' ';
    // }

    // K Diff Pairs in an array.

    // vector<int> arr{1, 3, 1, 5, 4};

    // int K;
    // cin >> K;

    // int n = arr.size();

    // sort(arr.begin(), arr.end());

    // set<pair<int, int>> ans;

    // int i = 0;
    // int j = i + 1;

    // while (j < n)
    // {
    //     if (arr[j] - arr[i] == K)
    //     {
    //         ans.insert(make_pair(arr[i], arr[j]));
    //         i++;
    //         j++;
    //     }
    //     else if (arr[j] - arr[i] < K)
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    //     if (i == j)
    //     {
    //         j++;
    //     }
    // }

    // BRUTE FORCE - O(n^2)

    // set<pair<int, int>> ans;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[j] - arr[i] == K)
    //         {
    //             ans.insert(make_pair(arr[i], arr[j]));
    //         }
    //     }
    // }
    // for (auto const &var : ans)
    // {
    //     cout << "(" << var.first << ", " << var.second << ")"
    //          << " ";
    // }
    // cout << ans.size();
}