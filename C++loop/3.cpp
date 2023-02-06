// write a c program which accept any charachter as input and check whether entered charachter is vovel or consonent

#include <iostream>

using namespace std;

int main()
{
    char alpha;
    cout << "enter the charachter alpha" << endl;
    cin >> alpha;
    if (alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U' || alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        cout << alpha << " is a vovel";
    else if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
        cout << alpha << " its a consonent";
    else
        cout << "its a alphanumeric charachter" << endl;

    return 0;
}
