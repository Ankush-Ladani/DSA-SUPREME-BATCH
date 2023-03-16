#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr, int n)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int size = arr.size();

    cout << "Unique Element is " << findUnique(arr, size) << endl;
}