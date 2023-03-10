#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // FULL PYRAMID

    // for (int row = 0; row < n; row++)
    // {
    //     for (int space = 0; space < n - row - 1; space++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     for (int spaceStar = 0; spaceStar < row; spaceStar++)
    //     {
    //         cout << " *";
    //     }

    //     cout << endl;
    // }

    // INVERT FULL PYRAMID

    // for (int row = 0; row < n; row++)
    // {
    //     for (int space = 0; space < row; space++)
    //     {
    //         cout << " ";
    //     }
    //     for (int starSpace = 0; starSpace < n - row; starSpace++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // NUMERIC PYRAMID

    // for (int row = 0; row < n; row++)
    // {
    //     int k = row + 1;
    //     for (int col = 0; col < 1; col++)
    //     {
    //         for (int space = 0; space < n - row - 1; space++)
    //         {
    //             cout << " ";
    //         }
    //         for (int i = 0; i < row + 1; i++)
    //         {
    //             cout << k;
    //             k++;
    //         }
    //         --k;
    //         for (int j = 0; j < row; j++)
    //         {
    //             k = k - 1;
    //             cout << k;
    //         }
    //     }
    //     cout << endl;
    // }

    //  NUMERIC HOLLOW FULL PYRAMID

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0 || row == n - 1) //  try with or with row == n-1
            {
                if (col % 2 == 0)
                {
                    cout << start;
                    start++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (col == 0)
                {
                    cout << 1;
                }
                else if (col == 2 * row + 1 - 1)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     int start = 1;
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0 || col == 2 * row + 1 - 1)
    //         {
    //             if (col % 2 == 0)
    //             {
    //                 cout << start;
    //                 start++;
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     int k = 1;
    //     for (int col = 0; col < n; col += 1)
    //     {
    //         if (col < n - row - 1)
    //         {
    //             cout << " ";
    //         }
    //         if (!(col < n - row - 1))
    //         {
    //             cout << " " << k++;
    //         }
    //         // if ((col - row) == (n - 1))
    //         // {
    //         //     cout << k;
    //         // }
    //         // k = k + 1;
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     int k = 1;
    //     int y = 0;
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << k++ << " ";
    //     }
    //     cout << endl;
    // }
}
