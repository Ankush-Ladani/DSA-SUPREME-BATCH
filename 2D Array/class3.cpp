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
    // vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> arr(5, vector<int>(5));

    // ABOVE IS FOR 5 ROWS AND 5 COLS

    for (int i = 0; i < 3; i++)
    {
        // cout << i << " row " << endl;
        for (int j = 0; j < arr[i].size(); j++)
        {
            // cout << j << " col " << endl;
            cin >> arr[i][j];
        }
        cout << endl;
    }

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