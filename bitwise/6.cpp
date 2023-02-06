// c++ program to toggle or invert nth bit of a number
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, n, newnum;
    cout << "input number " << endl;
    cin >> num;
    cout << "input the nth bit to invert " << endl;
    cin >> n;
    newnum = (1 << n) ^ num;
    cout << "after toggeling nth bit : " << newnum << " in decimal" << endl;

    return 0;
}
