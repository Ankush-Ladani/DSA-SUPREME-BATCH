#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] != mid + 1 && arr[mid - 1] == mid)
        {
            return mid + 1;
        }
        if (arr[mid] != mid + 1)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing_num = missingNumber(arr, n);
    if (missing_num == -1)
    {
        cout << "No number is missing." << endl;
    }
    else
    {
        cout << "The missing number is " << missing_num << endl;
    }
    return 0;
}
