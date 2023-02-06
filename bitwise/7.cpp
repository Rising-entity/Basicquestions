// write a c++ program to get highest  set bit of a number
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;

    cout << "enter the number" << endl;
    cin >> num;
    int a = num;
    int order;
    for (int i = 0; i < 32; i++)
    {
        if (num & 1)
            order = i;
        if (num == 0)
            break;
        num = num >> 1;
    }

    if (a != 0)
        cout << "highest order set bit in " << a << " is " << order;
    else
    {
        cout << "0 not contain set bit ";
    }

    return 0;
}
