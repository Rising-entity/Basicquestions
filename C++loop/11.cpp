// write a c++ program to calculate the sum of digit of a number;

#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cout << "enter the number:";
    cin >> num;
    for (num; num >= 1; num = num / 10)
    {
        int rem = num % 10;
        sum = sum + rem;
    }
    cout << "sum of digits of a number is " << sum;
}
