// write a c++ program to check whether number is pallindrome or not
#include <iostream>

using namespace std;

int main()
{
    int rev = 0, rem, num;
    cout << "enter the number: ";
    cin >> num;
    int a = num;
    for (num; num > 0; num = num / 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    cout << "the rverse of a number is " << rev << endl;
    rev == a ? cout << "its a pallindrome" : cout << "its not a pallindrome";

    return 0;
}
