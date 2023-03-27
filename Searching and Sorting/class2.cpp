#include <iostream>
#include <vector>
#include <cstdlib>

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

int findQuotient(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);

    int ans;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid * abs(divisor) == abs(dividend))
        {
            if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
            {
                return mid;
            }
            else
            {
                return -1 * mid;
            }
        }
        else if (mid * abs(divisor) > abs(dividend))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return ans;
    }
    else
    {
        return -1 * ans;
    }
}

int main()
{
    // DIVIDE 2 NO'S USING BINARY SEARCH

    int dividend;
    cout << "Enter dividend : " << endl;
    cin >> dividend;

    int divisor;
    cout << "Enter divisor : " << endl;
    cin >> divisor;

    int precision;
    cout << "Enter Precision : " << endl;
    cin >> precision;

    double ans = findQuotient(dividend, divisor);
    // cout << ans << endl;

    double val = 0.1;

    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * abs(divisor) <= abs(dividend); j = j + val)
        {
            ans = j;
        }
        val = val / 10;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        cout << ans;
    }
    else
    {
        cout << -1 * ans;
    }

    // SEARCH IN 2D ARRAY USING BINARY SEARCH
    // vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    // int key;
    // cout << "Enter Key : " << endl;
    // cin >> key;

    // int s = 0;
    // int n = arr.size();
    // int m = arr[0].size();

    // int elements = n * m;

    // int e = elements - 1;

    // int mid = s + (e - s) / 2;

    // while (s <= e)
    // {
    //     int row = mid / m;
    //     int cols = mid % m;

    //     if (arr[row][cols] == key)
    //     {
    //         cout << mid << endl;
    //         break;
    //     }
    //     else if (arr[row][cols] > key)
    //     {
    //         e = mid - 1;
    //     }
    //     else
    //     {
    //         s = mid + 1;
    //     }
    //     mid = s + (e - s) / 2;
    // }

    // Search in an almost sorted array

    // vector<int> arr{10, 3, 40, 20, 50, 80, 70, 90};
    // int key;
    // cin >> key;

    // int n = arr.size();

    // int ans = findKey(arr, key, n);

    // cout << ans << endl;

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