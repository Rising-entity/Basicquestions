// check number is armstrong or not
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    int sum = 0;
    int a = num;
    int digits = log10(num) + 1;

    for (int i = num; i != 0; i = i / 10)
    {
        int rem = i % 10;
        sum = sum + pow(rem, digits);
    }
    if (sum == a)
    {
        cout << a << " is a armstrong number";
    }
    else
        cout << a << " is not a armstrong number";

    return 0;
}
