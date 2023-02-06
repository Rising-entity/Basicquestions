// //C++ program to find HCF (GCD) of two numbers
// #include <iostream>

// using namespace std;

// int main()
// {
//     int num1, num2, min, hcf = 1; //here hcf is decleared by one if we don't found any hcf;
//     cout << "Enter the numbers num1 and num2 respectively";
//     cin >> num1 >> num2;
//     min = (num1 < num2) ? num1 : num2;
//     for (int i = 1; i <= min; i++)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             hcf = i;
//         }
//     }
//     cout << hcf;
//     return 0;
// }

// find GCD of two numbers
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int flag = 0;
    int GCD = 1;
    int arr1[100];
    int arr2[100];
    int num1, num2;

    cout << "enter the numbers" << endl;
    cin >> num1 >> num2;
    // cin >> num2;
    int a = min(num1, num2);
    // cout<<a;
    int count1 = 0;
    int count2 = 0;
    for (int i = num1; i >= 1; i--)
    {
        if (num1 % i == 0)
        {
            arr1[count1] = i;
            count1++;
        }
    }
    for (int i = num2; i >= 1; i--)
    {
        if (num2 % i == 0)
        {
            arr2[count2] = i;
            count2++;
        }
    }
    if (num1 == a)
    {
        int i = 0;
        while (i < count1)
        {
            for (int j = 0; j < count2; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    GCD = arr1[i];
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;

            i++;
        }
    }
    else
    {
        int i = 0;
        while (i < count2)
        {
            for (int j = 0; j < count1; j++)
            {
                if (arr2[i] == arr1[j])
                {
                    GCD = arr1[j];
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;

            i++;
        }
    }
    cout << "GCD/HCF is " << GCD;
    return 0;
}
