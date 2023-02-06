
//Program to find prime factors of a number
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "enter the number :";
	cin >> num;
	cout << "prime factors of " << num << " are ";
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			int sum = 0;
			int b = i;
			for (int j = 2; j <= i; j++)
			{
				if (i % j == 0)
					sum = sum + j;
			}
			if (sum == b)
				cout << b << ", ";
		}
	}

	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int number;
//     cout << "entre the number";
//     cin >> number;
// cout << "prime factors of " << number << " are ";
//     for (int i = 2; i <= number; i++)
//     {
//         int isprime = 1;
//         if (number % i == 0)
//         {
//             for (int j = 2; j <= sqrt(i); j++)
//             {
//                 if (i % j == 0)
//                 {
//                     isprime = 0;
//                     break;
//                 }
//             }
//             if (isprime == 1)
//             {
//                 cout << i << " ";
//             }
//         }
//     }

//     return 0;
// }
