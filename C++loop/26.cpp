// write a C program to print the all the armstrong numbers from 1 to n
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int end, sum;
    cout << "enter the end" << endl;
    cin >> end;

    for (int j = 1; j <= end; j++)
    {
        sum = 0;
        int digits = log10(j) + 1;
        int a = j;
        for (int i = j; i != 0; i = i / 10)
        {
            int rem = i % 10;
            sum = sum + pow(rem, digits);
        }
        if (sum == a)
        {
            cout << a << " ";
        }
    }

    return 0;
}
