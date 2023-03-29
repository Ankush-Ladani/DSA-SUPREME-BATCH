#include <vector>
#include <iostream>

using namespace std;

int findOdd(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
            return arr[s];
        // mid is even
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        // mid is odd
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}

int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

bool binarySearch(vector<int> arr, int start, int end, int key)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

bool searchInRotatedAndSorted(vector<int> arr, int key, int pivot)
{
    if (key >= arr[pivot] && key <= arr[arr.size() - 1])
    {
        return binarySearch(arr, pivot, arr.size() - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, key);
    }
    return false;
}

int main()
{

    vector<int> arr{8, 10, 17, 1};

    int k;
    cin >> k;

    int ans = findPivot(arr);

    bool ans2 = searchInRotatedAndSorted(arr, k, ans);

    cout << ans2 << endl;

    // vector<int> arr{1, 2, 2, 3, 3};

    // int ans = findOdd(arr);

    // cout << ans;
}