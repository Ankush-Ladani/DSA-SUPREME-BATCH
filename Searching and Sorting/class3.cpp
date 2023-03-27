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

int main()
{
    vector<int> arr{1, 2, 2, 3, 3};

    int ans = findOdd(arr);

    cout << ans;
}