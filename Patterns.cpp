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
}
