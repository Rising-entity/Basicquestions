// Write a C++ program to find total number of alphabets, digits or special character in a string.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int alpha = 0, digits = 0, specialChar = 0;
    cout << "input an any string " << endl;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90)
        {
            alpha++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            digits++;
        }
        else 
            specialChar++;
    }
    cout << "alphabets = " << alpha << endl
         << "digits = " << digits << endl
         << "special charachters = " << specialChar;

    return 0;
}
