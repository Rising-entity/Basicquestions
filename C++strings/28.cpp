// Write a C program to find first occurrence of a word in a given string.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, str2;
    cout << "enter the string " << endl;
    getline(cin, str);
    cout << "enter the word that you want to find" << endl;
    getline(cin, str2);
    cout << str2 << " is found at index " << str.find(str2) << endl;

    return 0;
}
