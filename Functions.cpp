#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;

    // CONVERT CELCIUS TO FEHRENHIT

    float fehrenheit = (9.0 / 5) * n + 32;

    cout << n << " CELSIUS = " << fehrenheit << " FEHRENHEIT";

    // CONVERT KMS INTO MILES

    // float miles = n * 0.6214;

    // cout << n << " KM = " << miles << " MILES";

    // CREATE A NUMBER USING DIGITS

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> n;
    // }
    // cout << n;

    // PRINT ALL DIGITS OF A NUMBER || REVERSE A NUMBER

    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     cout << (digit) << " ";
    //     n = n / 10;
    // }

    // TODO - PRINT ALL PRIME NUMBER FROM 1 to N

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i == 1)
    //     {
    //         cout << "1 is prime";
    //         cout << endl;
    //     }
    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             cout << j << " is prime";
    //             cout << endl;
    //         }
    //     }
    // }

    // NUMBER IS PRIME OR NOT

    // bool isPrime = true;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //     }
    // }

    // if (isPrime)
    // {
    //     cout << n << " IS PRIME";
    // }
    // else
    // {
    //     cout << n << " IS NOT PRIME";
    // }

    // FACTORIAL OF A NUMBER

    // int fact = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     fact *= i;
    // }
    // cout << fact;
}