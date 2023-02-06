// write a c++ program and print it revesre
#include <iostream>

using namespace std;

int main()
{
    int rev = 0, rem, num;
    cout << "enter the number: ";
    cin >> num;
    for (num; num > 0; num = num / 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    cout << "the rverse of a number is " << rev;
    return 0;
}
