// c++ program to get the nth bit of a number
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, n;
    cout << "enter the number ";
    cin >> num;
    cout << "enter the nth bit number " << endl;
    cin >> n;
    num = num >> (n);
    if (num & 1)
    {
        cout << "nth bit of a number is set (1) " << endl;
    }
    else
    {
        cout << "nth bit of a number is not set (0)";
    }

    return 0;
}
