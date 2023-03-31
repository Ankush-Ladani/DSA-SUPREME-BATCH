#include <bits/stdc++.h>
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
    // FACTORIAL OF A NUMBER
    // vector<int> ans;
    // ans.push_back(1);
    // int n;
    // cin >> n;

    // int carry = 0;

    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = 0; j < ans.size(); j++)
    //     {
    //         int x = ans[j] * i + carry;
    //         ans[j] = x % 10;
    //         carry = x / 10;
    //     }
    //     while (carry)
    //     {
    //         ans.push_back(carry % 10);
    //         carry = carry / 10;
    //     }
    //     carry = 0;
    // }
    // reverse(ans.begin(), ans.end());

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i];
    // }

    // Add two numbers represented by two arrays

    // vector<int> a{2, 1, 4};
    // vector<int> b{9, 5, 4, 9};

    // int i = a.size() - 1;
    // int j = b.size() - 1;

    // int carry = 0;
    // string ans;

    // while (i >= 0 && j >= 0)
    // {
    //     int x = a[i] + b[j] + carry;
    //     int digit = x % 10;
    //     ans.push_back(digit + '0');
    //     carry = x / 10;
    //     i--;
    //     j--;
    // }
    // while (i >= 0)
    // {
    //     int x = a[i] + 0 + carry;
    //     int digit = x % 10;
    //     ans.push_back(digit + '0');
    //     carry = x / 10;
    //     i--;
    // }
    // while (j >= 0)
    // {
    //     int x = 0 + b[j] + carry;
    //     int digit = x % 10;
    //     ans.push_back(digit + '0');
    //     carry = x / 10;
    //     j--;
    // }

    // if (carry)
    // {
    //     carry = carry / 10;
    //     ans.push_back(carry + '0');
    // }

    // while (ans[ans.size() - 1] == 0)
    // {
    //     ans.pop_back();
    // }

    // reverse(ans.begin(), ans.end());
    // cout << ans;

    // vector<int> prices{7, 1, 5, 3, 6, 4};

    // int maxProfit = INT16_MIN;

    // for (int i = 0; i < prices.size(); i++)
    // {
    //     for (int j = i + 1; j < prices.size(); j++)
    //     {
    // cout << "Price at J - " << prices[j] << " Price at i " << prices[i] << endl;
    //         if (prices[j] - prices[i] >= maxProfit)
    //         {
    //             maxProfit = prices[j] - prices[i];
    //         }
    // if (maxDiff < 0)
    // {
    //     cout << "MAXDIFF is " << 0 << endl;
    // }
    // else
    // {
    //     cout << "MAXDIFF is " << maxDiff << endl;
    // }
    //     }
    // }

    // cout << "maxProfit is " << maxProfit << endl;

    // Q - 7 Left Rotate an array by 1 element.

    // vector<int> a{1, 2, 3, 4, 5, 10, 20};
    // int temp = a[0];
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (i == a.size() - 1)
    //         a[i] = temp;
    //     else
    //         a[i] = a[i + 1];
    // }

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }

    // Q - 6 Sort 0's and 1's

    // vector<int> a{0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0};

    // int start = 0;
    // int end = a.size() - 1;

    // while (start <= end)
    // {
    //     if (a[start] > a[end])
    //     {
    //         swap(a[start], a[end]);
    //         start++;
    //     }
    //     else if (a[start] == a[end])
    //     {
    //         if (a[start] == 1)
    //         {
    //             end--;
    //         }
    //         else
    //         {
    //             start++;
    //         }
    //     }
    //     else
    //     {
    //         end--;
    //     }
    // }

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }

    // int n1, n2, n3, sum;
    // cout << "Enter Value of n1 - " << endl;
    // cin >> n1;
    // cout << "Enter Value of n2 - " << endl;
    // cin >> n2;
    // cout << "Enter Value of n3 - " << endl;
    // cin >> n3;
    // cout << "Enter Sum Value - " << endl;
    // cin >> sum;

    // int n = n1 + n2;

    // vector<int> a(n1);
    // vector<int> b(n2);
    // vector<int> c(n3);
    // vector<int> ans(n);

    // for (int i = 0; i < n1; i++)
    // {
    //     cout << "Enter "
    //          << "a - " << i + 1 << " - " << endl;
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n2; i++)
    // {
    //     cout << "Enter "
    //          << "b - " << i + 1 << " - " << endl;
    //     cin >> b[i];
    // }
    // for (int i = 0; i < n3; i++)
    // {
    //     cout << "Enter "
    //          << "c - " << i + 1 << " - " << endl;
    //     cin >> c[i];
    // }

    // Q - 5 Triplet Sum Problem

    // for (int i = 0; i < a.size(); i++)
    // {
    //     for (int j = 0; j < b.size(); j++)
    //     {
    //         for (int k = 0; k < c.size(); k++)
    //         {
    //             if (a[i] + b[j] + c[k] == sum)
    //                 cout << a[i] << " " << b[j] << " " << c[k] << endl;
    //         }
    //     }
    // }

    // Q - 4 Pair Sum Problem

    // for (int i = 0; i < a.size(); i++)
    // {
    //     for (int j = 0; j < b.size(); j++)
    //     {
    //         if (a[i] + b[j] == sum)
    //             cout << a[i] << " " << b[j] << endl;
    //     }
    // }

    // Q - 3 Intersection of 2 Arrays

    // int n1, n2;
    // cout << "Enter Value of n1 - " << endl;
    // cin >> n1;
    // cout << "Enter Value of n2 - " << endl;
    // cin >> n2;

    // int n = n1 + n2;

    // vector<int> a(n1);
    // vector<int> b(n2);
    // vector<int> ans(n);

    // for (int i = 0; i < n1; i++)
    // {
    //     cout << "Enter "
    //          << "a - " << i + 1 << " - " << endl;
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n2; i++)
    // {
    //     cout << "Enter "
    //          << "b - " << i + 1 << " - " << endl;
    //     cin >> b[i];
    // }
    // int i = 0, j = 0;
    // while (i < a.size() && j < b.size())
    // {
    //     if (a[i] == b[j])
    //     {
    //         ans.push_back(a[i]);
    //         i++;
    //         j++;
    //     }
    //     else if (a[i] < b[j])
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // Q-2 Union of Two Arrays

    // int n1, n2;
    // cout << "Enter Value of n1 - " << endl;
    // cin >> n1;
    // cout << "Enter Value of n2 - " << endl;
    // cin >> n2;

    // int n = n1 + n2;

    // vector<int> a(n1);
    // vector<int> b(n2);
    // vector<int> ans(n);

    // for (int i = 0; i < n1; i++)
    // {
    //     cout << "Enter "
    //          << "a - " << i + 1 << " - " << endl;
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n2; i++)
    // {
    //     cout << "Enter "
    //          << "b - " << i + 1 << " - " << endl;
    //     cin >> b[i];
    // }

    // for (int i = 0; i < n1; i++)
    // {
    //     ans.push_back(a[i]);
    // }
    // for (int i = 0; i < n2; i++)
    // {
    //     ans.push_back(b[i]);
    // }
    // cout << endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // QUESTION - 1 ( FIND UNIQUE ELEMENT )

    // int n;
    // cin >> n;

    // vector<int> arr(n);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }

    // int size = arr.size();

    // cout << "Unique Element is " << findUnique(arr, size) << endl;
}