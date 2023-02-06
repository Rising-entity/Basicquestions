// write a c proggrame to count number of digits in a number

#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter the number:";
    cin >> num;
    for (num; num > 0; num = num / 10)
    {
        count++;
    }
    cout << "total number of digits are " << count;

    return 0;
}