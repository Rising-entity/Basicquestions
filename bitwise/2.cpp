// write a cpp program to check MSB is set or not

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number " << endl;
    cin >> num;
    int msb = 1 << 31;
    if (num & msb)
    {
        cout << " MSB is set (-1) " << endl;
    }
    else
    {
        cout << "MSB is not set (0)";
    }

    return 0;
}
