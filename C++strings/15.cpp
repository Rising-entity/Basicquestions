// Write a C program to find last occurrence of a character in a given string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch[0];
    cout << "input the string" << endl;
    getline(cin, str);
    cout << "input the required charachter" << endl;
    cin >> ch[0];
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == ch[0])
        {
            cout << ch[0] << " is found at index " << i;
            break;
        }
    }

    return 0;
}
