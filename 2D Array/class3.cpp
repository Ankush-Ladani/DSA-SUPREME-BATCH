#include <iostream>
#include <vector>
#include <set>

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
    // FIND COMMON ELEMENT IN 3 SORTED ARRAYS

    // vector<int> A{1, 5, 10, 20, 40, 80};
    // vector<int> B{6, 7, 20, 80, 100};
    // vector<int> C{3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> A{6, 50};
    vector<int> B{6, 50};
    vector<int> C{6, 50};

    // vector<int> A{1, 1000, 20};
    // vector<int> B{1, 1000, 200};
    // vector<int> C{1, 1000, 2000};

    // ANS - 20 , 80

    int i = 0, j = 0, k = 0;
    vector<int> ans;

    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();

    set<int> st;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            // ans.push_back(A[i]);
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    // WAVE PRINT

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16

    // vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {10, 20, 30, 40}};

    // int n = arr[0].size(); // rows
    // int m = arr.size();    // columns

    // vector<int> ans;

    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             cout << arr[j][i] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = m - 1; j >= 0; j--)
    //         {
    //             cout << arr[j][i] << " ";
    //         }
    //     }
    // }

    // SPIRAL PRINT

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16

    // vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    // int n = arr.size();
    // int m = arr[0].size();
    // int total = n * m;

    // int startingRow = 0;
    // int endingCol = n - 1;

    // int endingRow = m - 1;
    // int startingCol = 0;

    // int count = 0;

    // vector<int> ans;

    // while (count < total)
    // {
    //     for (int i = startingCol; i <= endingCol && count < total; i++)
    //     {
    //         ans.push_back(arr[startingRow][i]);
    //         count++;
    //     }
    //     startingRow++;
    //     for (int i = startingRow; i <= endingRow && count < total; i++)
    //     {
    //         ans.push_back(arr[i][endingCol]);
    //         count++;
    //     }
    //     endingCol--;
    //     for (int i = endingCol; i >= startingCol && count < total; i--)
    //     {
    //         ans.push_back(arr[endingRow][i]);
    //         count++;
    //     }
    //     endingRow--;
    //     for (int i = endingRow; i >= startingRow && count < total; i--)
    //     {
    //         ans.push_back(arr[i][startingCol]);
    //         count++;
    //     }
    //     startingCol++;
    // }
    // for (int i = 0; i < total; i++)
    // {
    //     cout << ans[i] << " ";
    // }

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