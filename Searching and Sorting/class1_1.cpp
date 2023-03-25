#include <iostream>
#include <vector>

using namespace std;

int firstOccurance(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    bool isFound = false;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurance(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    bool isFound = false;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int search(int ar[], int size)
{
    // Extreme cases
    if (ar[0] != 1)
        return 1;
    if (ar[size - 1] != (size + 1))
        return size + 1;

    int a = 0, b = size - 1;
    int mid;
    while ((b - a) > 1)
    {
        mid = (a + b) / 2;
        if ((ar[a] - a) != (ar[mid] - mid))
            b = mid;
        else if ((ar[b] - b) != (ar[mid] - mid))
            a = mid;
    }
    return (ar[a] + 1);
}

int main()
{

    // FIND MISSING ELEMENT ( FOR SORTED ARRAY ONLY )

    int ar[] = {1, 2, 3, 4, 5, 6, 8};
    int size = sizeof(ar) / sizeof(ar[0]);
    cout << "Missing number: " << search(ar, size);

    // FIRST OCCURANCE
    // LAST OCCURANCE
    // TOTAL NUMBER OF OCCURANCE

    // vector<int> arr{1, 3, 5, 5, 5, 5, 67, 123, 125};

    // int key;
    // cin >> key;

    // cout << endl;

    // cout << "First Occurance of " << arr[firstOccurance(arr, key)] << " is at " << firstOccurance(arr, key);

    // cout << endl;

    // cout << "First Occurance of " << arr[lastOccurance(arr, key)] << " is at " << lastOccurance(arr, key);

    // cout << endl;

    // cout << "Total Occurance of " << arr[lastOccurance(arr, key)] << " = " << lastOccurance(arr, key) - firstOccurance(arr, key) + 1;

    // cout << endl;
}