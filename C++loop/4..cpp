
// write a c program to print all alphabets from a to z;

#include <iostream>

using namespace std;

int main()
{
    char alpha;
    string type;
    cout << "do you want to print alphabetes in capital then enter capital else enter small" << endl;
    cin >> type;
    if (type == "capital" || type == "Capital" || type == "CAPITAL")
    {
        for (alpha = 'A'; alpha <= 'Z'; alpha++)
        {
            cout << alpha << endl;
        }
    }
    else if (type == "small" || type == "Small" || type == "SMALL")
    {
        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
            cout << alpha << endl;
        }
    }
    else
        cout << "please enter the option properly";
    return 0;
}
