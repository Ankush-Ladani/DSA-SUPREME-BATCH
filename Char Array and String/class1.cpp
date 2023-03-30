
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char name[100];

    string str;

    str[0] = 'a';
    str[1] = 'n';
    str[2] = 'p';
    str[3] = '\0';
    str[4] = 'u';

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << str[i] << " ";
    // }

    cout << str;

    // ! cin cant take input as space
    // cin >> name;

    // ! For getting input spaces also
    // cin.getline(name, 50);

    // name[2] = 'a';

    // cin >> name;
    // for (int i = 0; i <= strlen(name); i++)
    // {
    //     cout << i << " " << name[i] << endl;
    // }

    name[0] = 'a';
    name[1] = 'n';
    name[2] = 'k';
    name[3] = '\0';
    name[4] = 'u';

    cout << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << name[i] << " ";
    // }

    cout << name << endl;
}