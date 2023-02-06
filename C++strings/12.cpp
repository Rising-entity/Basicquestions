// Write a C++ program to check whether a string is palindrome or not.
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "input the string " << endl;

    getline(cin, str);
    int isPalindrome = 1;
    string original = str;
    int size = str.length() / 2;
    int mid = size - 1;

    for (int i = 0, j = str.length() - 1; i < mid && j > mid; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1)
        cout << str << " is a pallindrome string ";
    else
        cout << str << " is not a pallindrome string ";

    return 0;
}
