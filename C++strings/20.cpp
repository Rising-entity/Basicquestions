// Write a C program to count frequency of each character in a string
#include <iostream>

using namespace std;

int main()
{
    int freq[256];
    string str;
    int ascii;
    for (int i = 0; i < 256; i++)
    {
        freq[i] = 0;
    }
    cout << "enter the string " << endl;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        ascii = (int)str[i];
        freq[ascii] += 1;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[(int)str[i]] >= 1)
        {
            cout << "the frequency of charchter " << str[i] << " is " << freq[(int)str[i]] << endl;
        }
        freq[(int)str[i]] = 0;
    }

    return 0;
}