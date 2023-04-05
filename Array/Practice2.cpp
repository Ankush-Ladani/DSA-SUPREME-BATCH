#include <bits/stdc++.h>

using namespace std;

int main()
{
    // MAXIMUM CONSECUTIVE 1's
    // vector<int> arr{1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1};

    // int cnt = 0, maxi = 0;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] == 1)
    //     {
    //         cnt++;
    //     }
    //     else
    //     {
    //         cnt = 0;
    //     }
    //     maxi = max(cnt, maxi);
    // }
    // cout << maxi;

    // FINDING UNIQUE ELEMENT USING BINARY SEARCH
    vector<int> arr{1, 1, 2, 2, 3, 3, 4};

    int low = 0;
    int high = arr.size() - 1;
    int mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    cout << arr[mid] << endl;
}