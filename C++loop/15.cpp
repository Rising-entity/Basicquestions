// write a c++ program to find the frequency of each digit in number;
// #include <iostream>

// using namespace std;

// int main()
// {
//     int f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, rem, num;
//     cout << "enter the number:";
//     cin >> num;
//     for (num; num > 0; num = num / 10)
//     {
//         rem = num % 10;
//         switch (rem)
//         {
//         case 0:
//             f0++;
//             break;
//         case 1:
//             f1++;
//             break;
//         case 2:
//             f2++;
//             break;
//         case 3:
//             f3++;
//             break;
//         case 4:
//             f4++;
//             break;
//         case 5:
//             f5++;
//             break;
//         case 6:
//             f6++;
//             break;
//         case 7:
//             f7++;
//             break;
//         case 8:
//             f8++;
//             break;
//         case 9:
//             f9++;
//             break;
//         }
//     }
//     cout << "frequency of 0 is" << f0 << endl;
//     cout << "frequency of 1 is" << f1 << endl;
//     cout << "frequency of 2 is" << f2 << endl;
//     cout << "frequency of 3 is" << f3 << endl;
//     cout << "frequency of 4 is" << f4 << endl;
//     cout << "frequency of 5 is" << f5 << endl;
//     cout << "frequency of 6 is" << f6 << endl;
//     cout << "frequency of 7 is" << f7 << endl;
//     cout << "frequency of 8 is" << f8 << endl;
//     cout << "frequency of 9 is" << f9 << endl;
//     return 0;
// }
// another method
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout << "enter tyhe n,mber" << endl;
    cin >> number;

    int freq[10];
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }

    for (int i = number; i != 0; i = i / 10)
    {
        int rem = i % 10;
        freq[rem]++;
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << "frequrcy of " << i << "is " << freq[i] << endl;
    }
}
