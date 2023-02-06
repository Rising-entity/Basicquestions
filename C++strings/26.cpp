// C program to replace last occurrence of a character in a string
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
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (a[0] == str[i])
        {
            str[i] = b[0];
            break;
        }
    }

    cout << str << endl;

    return 0;
}
