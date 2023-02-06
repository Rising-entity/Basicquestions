// find the LCM of two numbers
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2;
    int lcm = 1;
    cout << "enter the numbers " << endl;
    cin >> num1 >> num2;
    int maxnum = max(num1, num2);
    int i = maxnum;
    while (1)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
        i = i + maxnum;
    }

    cout << "LCM of given numbers is" << lcm;
}