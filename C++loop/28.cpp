// check strong number or not
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, sum = 0;
    cout << "enter the number " << endl;
    cin >> num;
    for (int i = num; i != 0; i = i / 10)
    {
        int rem = i % 10;
        int fact = 1;
        for (int j = rem; j > 1; j--)
        {
            fact = j * fact;
        }
        sum = sum + fact;
    }
    if (sum == num)
    {
        cout << num << " is a strong number";
    }
    else
        cout << num << " is not a strong number";

    return 0;
}
