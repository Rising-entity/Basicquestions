// C++ program to find reverse of a string.
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "input the string " << endl;
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}
