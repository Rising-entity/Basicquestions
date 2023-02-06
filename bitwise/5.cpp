// write a c++ program to clear nth bit of a number(means make nth bit 0)
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, n;
    cout << "input number " << endl;
    cin >> num;
    cout << "input nth bit to clear" << endl;
    cin >> n;
    int newnum = (1 << n) ^ num;
    cout << "number after clearing nth bit :" << newnum << " in decimal" << endl;

    return 0;
}
