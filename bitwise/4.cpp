//  write a c++ program to set nth bit of a number
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number " << endl;
    cin >> num;
    int n;
    cout << "input nth bit " << endl;
    cin >> n;
    int newnum = (1 << n) | num;
    cout << "number after setting nth bit : " << newnum << " in decimal";

    return 0;
}
