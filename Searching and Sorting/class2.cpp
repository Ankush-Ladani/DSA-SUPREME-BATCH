#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // FIND PEAK ELEMENT IN AN ARRAY

    vector<int> arr{20, 130, 40, 100};

    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (((mid + 1 < arr.size()) && (arr[mid + 1] <= arr[mid])) && ((mid - 1 >= 0) && (arr[mid - 1] <= arr[mid])))
        {
            cout << arr[mid];
            break;
        }
        else if (arr[mid + 1] > arr[mid])
        {
            s = mid + 1;
        }
        else if (arr[mid + 1] < arr[mid])
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    if (s == e)
    {
        cout << arr[s] << endl;
    }
}