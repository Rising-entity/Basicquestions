// Write a C program to remove all occurrences of a character from string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    char a[100];
    cout << "input the string " << endl;
    getline(cin, str);
    cout << "input the character to remove" << endl;
    cin >> a;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (a[0] == str[i])
        {
            str.erase(i, 1);
        }
    }
    cout << str << endl;

    return 0;
}
