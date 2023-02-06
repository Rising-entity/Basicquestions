//Write a C program to check whether a number is Prime number or not.
// #include <iostream>

// using namespace std;

// int main()
// {
//     int num, sum = 0;

//     cout << "Enter the number:";
//     cin >> num;
//     int a = num;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//             sum = sum + i;
//     }
//     if (sum == (a + 1))
//         cout << "its prime no";
//     else
//         cout << "its not prime no";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int isprime = 1;
    int num;
    cout << "enter the numbers " << endl;
    cin >> num;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
        }
    }
    if (isprime == 1)
    {
        cout << "number is prime";
    }
    else
        cout << "number is not prime";
}