// check number is prime or not
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "entre the number";
    cin >> num;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << num << " is a perfect number";
    }
    else
        cout << num << " is not a perfect number";

    return 0;
}
