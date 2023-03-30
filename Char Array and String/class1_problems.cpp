#include <bits/stdc++.h>

using namespace std;

int findLength(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void reverseString(char name[])
{
    int i = 0;
    int j = findLength(name) - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

void replaceAllSpaces(char name[])
{
    int n = findLength(name);

    for (int i = 0; i < n; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
}

bool isPalindrome(char name[])
{
    int i = 0;
    int j = findLength(name) - 1;

    while (i <= j)
    {
        if (name[i] != name[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

void toUpperCase(char name[])
{
    int n = findLength(name);

    for (int i = 0; i < n; i++)
    {
        if (!(name[i] >= 'A' && name[i] <= 'Z'))
            name[i] = name[i] - 'a' + 'A';
    }
}

void toLowerCase(char name[])
{
    int n = findLength(name);

    for (int i = 0; i < n; i++)
    {
        if (!(name[i] >= 'a' && name[i] <= 'z'))
            name[i] = name[i] - 'A' + 'a';
    }
}

int main()
{
    char name[100];

    // cin >> name;
    cin.getline(name, 100);

    // int lengthOfString = findLength(name);
    // cout << lengthOfString;

    // cout << name << endl;
    // reverseString(name);
    // cout << name;

    // replaceAllSpaces(name);
    // cout << name << endl;

    // bool ans = isPalindrome(name);
    // cout << ans << endl;

    // toUpperCase(name);
    // cout << name << endl;

    // toLowerCase(name);
    // cout << name << endl;
}