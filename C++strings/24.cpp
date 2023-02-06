// Write a C program to remove all repeated characters from a given string.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    //   char a[100];
    cout << "input the string " << endl;
    getline(cin, str);
    //   cout << "input the character to remove" << endl;
    //   cin >> a;

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {

            if (str[i] == str[j])
                str.erase(j, 1);
        }
    }
    cout << str << endl;

    return 0;
}
