// write a c++ program to find first and last digit of a number

#include <iostream>

using namespace std;

int main()
{
    int num, ld, fd;
    cout << "enter the num:";
    cin >> num;
    ld = num % 10;
    for (num; num >= 1; num = num / 10)
    {
        fd = num;
    }
    cout << "first digit of a number is:" << fd << endl
         << "and last digit of a number is: " << ld;
}
