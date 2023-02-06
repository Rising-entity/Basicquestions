// write a c++ program to calculate the product of digit of a number;

#include <iostream>

using namespace std;

int main()
{
    int num, product = 1;
    cout << "enter the number:";
    cin >> num;
    for (num; num >= 1; num = num / 10)
    {
        int rem = num % 10;
        product = product * rem;
    }
    cout << "the product of digits of a number is " << product;
}