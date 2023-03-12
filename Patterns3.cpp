#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // * * * * * * * * * *
    // *                 *
    // *                 *
    // *                 *
    // *                 *
    // *                 *
    // *                 *
    // *                 *
    // *                 *
    // * * * * * * * * * *

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         if (row == 0 || row == n - 1 || col == 0 || col == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // * * * * * * * * * *
    // *               *
    // *             *
    // *           *
    // *         *
    // *       *
    // *     *
    // *   *
    // * *
    // *

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         if (row == 0 || row == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else if (col == 0 || col == n - row - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    //          *
    //         * *
    //        *   *
    //       *     *
    //      *       *
    //     *         *
    //    *           *
    //   *             *
    //  *               *
    // *                 *

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0 || col == 2 * row)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 1
    // 1 2
    // 1   3
    // 1     4
    // 1       5
    // 1         6
    // 1           7
    // 1 2 3 4 5 6 7 8

    // for (int row = 0; row < n; row++)
    // {
    //     int ans = row;
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         if (col == 0)
    //         {
    //             cout << 1 << " ";
    //         }
    //         else if (col == row)
    //         {
    //             cout << row + 1;
    //         }
    //         else if (row == n - 1)
    //         {
    //             cout << col + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 1 2 3 4 5
    // 2     5
    // 3   5
    // 4 5
    // 5

    // for (int row = 0; row < n; row++)
    // {
    //     int ans = row;
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         if (row == 0 || row == n - 1)
    //         {
    //             cout << ++ans << " ";
    //         }
    //         else if (col == n - row - 1)
    //         {
    //             cout << 5 << " ";
    //         }
    //         else if (col == 0)
    //         {
    //             cout << row + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     int k = 1;
    //     int ans = row;
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0 || col == 2 * row)
    //         {
    //             cout << 1;
    //         }
    //         else if (col > row)
    //         {
    //             cout << ans--;
    //         }
    //         else
    //         {
    //             cout << ++k;
    //         }
    //     }
    //     cout << endl;
    // }

    // * * * * * * * * 1 * * * * * * * *
    // * * * * * * * 2 * 2 * * * * * * *
    // * * * * * * 3 * 3 * 3 * * * * * *
    // * * * * * 4 * 4 * 4 * 4 * * * * *
    // * * * * 5 * 5 * 5 * 5 * 5 * * * *

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < 2 * n - row - 2; col++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col % 2 != 0)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << row + 1 << " ";
    //         }
    //     }
    //     for (int col = 0; col < 2 * n - row - 2; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 121
    // 12321
    // 121
    // 1

    // for (int row = 0; row < n; row++)
    // {
    //     int cond = (row <= n / 2) ? 2 * row : 2 * (n - row - 1);

    //     for (int col = 0; col <= cond; col++)
    //     {

    //         if (col <= cond / 2)
    //         {
    //             cout << col + 1;
    //         }
    //         else
    //         {
    //             cout << cond - col + 1;
    //         }
    //     }
    //     cout << endl;
    // }

    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 1*2
    // -2

    // int count = 0;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col % 2 != 0)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << ++count;
    //         }
    //     }
    //     cout << endl;
    // }
    // int rowNum = 0;
    // for (int row = 0; row < n; row++)
    // {
    //     count = 2 * n - 2 * row - 1 - rowNum;
    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         if (col % 2 == 0)
    //         {
    //             cout << count++;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    //     rowNum++;
    // }

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28

    // int count = 1;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }

    // *         *
    // **       **
    // ***     ***
    // ****   ****
    // ***** *****
    // ***** *****
    // ****   ****
    // ***     ***
    // **       **
    // *         *
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //         1
    //       2 3 2
    //     3 4 5 4 3
    //   4 5 6 7 6 5 4
    // 5 6 7 8 9 8 7 6 5
    // for (int row = 0; row < n; row++)
    // {
    //     int k = row + 1;
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << k++ << " ";
    //     }
    //     for (int col = k - 1; col > row + 1; col--)
    //     {
    //         cout << col - 1 << " ";
    //     }
    //     cout << endl;
    //     cout << k << endl;
    // }
}