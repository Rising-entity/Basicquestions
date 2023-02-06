// C++ program to count number of words in a string
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "input the string" << endl;
    getline(cin, str);
    int i = 0, prevChar = '\0', word = 0;
    while (1)
    {
        if (str[i] == '\0' || str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
        {

            if (prevChar != '\0' && prevChar != '\n' && prevChar != '\t' && prevChar != ' ')
            {
                word++;
            }
        }
        prevChar = str[i];
        if (str[i] == '\0')
            break;
        else
            i++;
    }
    cout << "total number of words are " << word << endl;

    return 0;
}
