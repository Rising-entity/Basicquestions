// Write a C program to replace all occurrences of a character with another in a string.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    char a[100], b[100];
    cout << "input the string " << endl;
    getline(cin, str);
    cout << "input the character to rplace" << endl;
    cin >> a;
    cout << "input the character to rplace with" << endl;
    cin >> b;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (a[0] == str[i])
        {
            str[i] = b[0];
            //   break;
        }
    }

    cout << str << endl;

    return 0;
}
