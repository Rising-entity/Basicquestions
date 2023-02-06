// write a c++ program to coun
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number " << endl;
    cin >> num;
    int count = 0;
    for (int i = 0; i < 32; i = i + 1)
    {
        if (num & 1)
        {
            break;
        }
        if ((num & 1) == 0)
        {

            count++;
        }

        num = num >> 1;
    }
    cout << "trailing zeros: " << count;

    return 0;
}
