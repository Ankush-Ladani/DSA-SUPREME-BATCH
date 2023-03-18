#include <iostream>
#include <vector>

using namespace std;

bool findKey(int brr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (brr[i][j] == key)
                return true;
        }
    }
    return false;
}

int findMax(int brr[][3], int rows, int cols)
{
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (brr[i][j] > max)
            {
                max = brr[i][j];
            }
        }
    }
    return max;
}

int findMin(int brr[][3], int rows, int cols)
{
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (brr[i][j] < min)
            {
                min = brr[i][j];
            }
        }
    }
    return min;
}

void transposeArray(int brr[][3], int rows, int cols, int transpose[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = brr[i][j];
        }
    }
}

int main()
{
    vector<int> arr{10, 20, 30};
    vector<int> brr{10, 20, 40};
    vector<int> crr{10, 20, 70};

    vector<int> ans{0};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            for (int k = 0; k < crr.size(); k++)
            {
                if (arr[i] == brr[j] == crr[k])
                {
                    ans.push_back(crr[k]);
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    // FIND FIRST DUPLICATE ELEMENT

    // vector<int> arr{40, 20, 30, 10, 60, 40, 10};
    // bool gotDuplicate = false;
    // int duplicateNum = -1;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int count = 1;
    //     if (!gotDuplicate)
    //     {
    //         for (int j = i + 1; j < arr.size(); j++)
    //         {
    //             if (arr[i] == arr[j])
    //                 count++;
    //         }
    //     }
    //     if (count > 1)
    //     {
    //         gotDuplicate = true;
    //         duplicateNum = arr[i];
    //     }
    // }

    // cout << duplicateNum << endl;

    // FIND MISSING ELEMENT IN AN ARRAY

    // vector<int> arr{3, 0, 1};
    // int missingNum = -1;

    // for (int i = 0; i < arr.size() + 1; i++)
    // {
    //     for (int j = 0; j < arr.size(); i++)
    //     {
    //         if (i == arr[j])
    //             break;
    //         else
    //             missingNum = i;
    //     }
    // }

    // cout << missingNum;

    // MOVE ALL NEGATIVE NO'S TO LEFT SIDE OF AN ARRAY
    // vector<int> arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // int start = 0, end = arr.size() - 1;

    // while (start <= end)
    // {
    //     if (arr[start] < 0)
    //     {
    //         start++;
    //     }
    //     else if (arr[start] > arr[end])
    //     {
    //         swap(arr[start], arr[end]);
    //         start++;
    //         end--;
    //     }
    //     else
    //     {
    //         swap(arr[start], arr[end]);
    //         end--;
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // SORT 0'S , 1'S AND 2'S

    // vector<int> arr{0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    // int low = 0, mid = 0, hi = 11;

    // while (mid <= hi)
    // {
    //     if (arr[mid] == 0)
    //     {
    //         swap(arr[low], arr[mid]);
    //         low++;
    //         mid++;
    //     }
    //     else if (arr[mid] == 1)
    //     {
    //         mid++;
    //     }
    //     else if (arr[mid] == 2)
    //     {
    //         swap(arr[mid], arr[hi]);
    //         hi--;
    //     }
    // }

    // for (int i = 0; i < 12; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<vector<int>> arr(5, vector<int>(5));

    // ABOVE IS FOR 5 ROWS AND 5 COLS

    // for (int i = 0; i < 3; i++)
    // {
    // cout << i << " row " << endl;
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    // cout << j << " col " << endl;
    //         cin >> arr[i][j];
    //     }
    //     cout << endl;
    // }

    // cout << arr[1][2];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int transpose[3][3];

    // cout << "WITHOUT TRANSPOSED ARRAY - " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // transposeArray(brr, 3, 3, transpose);

    // cout << "TRANSPOSED ARRAY - " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // MIN AND MAX IN 2D ARRAY
    // cout << "MAX IS - " << findMax(brr, 3, 3) << endl;
    // cout << "MIN IS - " << findMin(brr, 3, 3) << endl;

    // LINEAR SEARCH IN 2D ARRAY
    // if (findKey(brr, 3, 3, 80))
    // {

    //     cout << endl
    //          << endl;
    //     cout << "HANJI HAM HE!!";
    //     cout << endl
    //          << endl;
    // }
    // else
    // {
    //     cout << endl
    //          << endl;
    //     cout << "NAHI JI HAM NAHI HE!!";
    //     cout << endl
    //          << endl;
    // }

    // COLUMN WISE SUM
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += brr[j][i];
    //     }
    //     cout << sum << endl;
    // }

    // ROW WISE SUM
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += brr[i][j];
    //     }
    //     cout << sum << endl;
    // }

    // Column wise print
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << brr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // int arr[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << arr[0][2];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}