// Write a C++ program to count occurrences of a character in given string
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string str;
    char a[0];
    cout << "Input the string" << endl;
    getline(cin, str);
    cout << "Input the charachter" << endl;
    cin >> a[0];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == a[0])
            count++;
    }
    cout << "the total of all ocurrences is " << count;

    return 0;
}
