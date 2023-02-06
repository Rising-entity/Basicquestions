//Write a C program to find sum of all prime numbers between 1 to n
// #include <iostream>

// using namespace std;

// int main()
// {
//     int i = 1, num, sum, end, sum2 = 0;

//     cout << "enter the number till you want to print he sum of prime no.:";
//     cin >> end;
//     while (i <= end)
//     {
//         sum = 0;
//         int b = i + 1;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//                 sum = sum + j;
//         }
//         if (sum == b && i > 1)
//             sum2 = sum2 + i;

//         i++;
//     }
//     cout << "the sum of prime numbers from 1 to" << end << "is" << sum2;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int num;
    int sum = 0;
    cout << "enter the numbers " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        int isprime = 1;
        if (i == 1)
        {
            i = 2;
        }

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
            }
        }
        if (isprime == 1)
        {
            sum = sum + i;
        }
    }

    cout << "the sum is " << sum;
    return 0;
}