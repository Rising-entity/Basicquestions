// c++ program to check the least significant BIT (LSB) of a number or not
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number ";
    cin >> num;
    if (num & 1 == 1)
        cout << "lsb is set(1)";
    else
        cout << "lsb is unset(0)";
    return 0;
}
