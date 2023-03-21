#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{1, 4, 6, 90, 100};

    int target;
    cin >> target;

    int n = arr.size();

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    bool isFound = false;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            isFound = true;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    if (isFound)
    {
        cout << arr[mid] << " is at " << mid << " index" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}