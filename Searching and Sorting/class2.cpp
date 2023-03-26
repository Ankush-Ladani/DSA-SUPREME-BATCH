#include <iostream>
#include <vector>

using namespace std;

int findSqaureRoot(int n, int s, int e)
{

    int mid = s + (e - s) / 2;

    int ans = 0;

    while (s <= e)
    {
        // cout << "s - " << s << " e - " << e << " mid - " << mid << endl;
        if (mid * mid == n)
        {
            // cout << "IF BLOCK" << endl;
            // return ans;
            break;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
            // cout << "ELSE IF BLOCK" << endl;
        }
        else
        {
            // cout << "ELSE BLOCK" << endl;
            e = mid - 1;
        }
        // cout << ans << endl;
        mid = s + (e - s) / 2;
    }
    return ans;
}

int findKey(vector<int> arr, int key, int size)
{

    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] == key)
        {
            return mid - 1;
        }
        else if (mid + 1 <= size && arr[mid + 1] == key)
        {
            return mid + 1;
        }
        if (arr[mid] < key)
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{

    // Search in an almost sorted array

    vector<int> arr{10, 3, 40, 20, 50, 80, 70, 90};
    int key;
    cin >> key;

    int n = arr.size();

    int ans = findKey(arr, key, n);

    cout << ans << endl;

    // SQUARE ROOT OF A NUMBER

    // int n;
    // cout << "ENTER NUMBER : " << endl;
    // cin >> n;

    // int precision;
    // cout << "ENTER PRECISION : " << endl;
    // cin >> precision;

    // double val = 0.1;

    // double sqrt = findSqaureRoot(n, 0, n);

    // for (int i = 0; i < precision; i++)
    // {
    //     for (double j = sqrt; j * j <= n; j += val)
    //     {
    //         sqrt = j;
    //     }
    //     val = val / 10;
    // }

    // cout << sqrt;

    // FIND PEAK ELEMENT IN AN ARRAY

    // vector<int> arr{20, 130, 400, 100};

    // int s = 0;
    // int e = arr.size() - 1;

    // int mid = s + (e - s) / 2;

    // while (s < e)
    // {
    //     if (((mid + 1 < arr.size()) && (arr[mid + 1] <= arr[mid])) && ((mid - 1 >= 0) && (arr[mid - 1] <= arr[mid])))
    //     {
    //         cout << arr[mid];
    //         break;
    //     }
    //     else if (arr[mid + 1] > arr[mid])
    //     {
    //         s = mid + 1;
    //     }
    //     else if (arr[mid + 1] < arr[mid])
    //     {
    //         e = mid;
    //     }
    //     mid = s + (e - s) / 2;
    // }
    // if (s == e)
    // {
    //     cout << arr[s] << endl;
    // }
}