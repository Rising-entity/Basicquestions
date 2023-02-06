// write a c proggrame to print all natural numbers from 1 to n using while
#include <iostream>

using namespace std;

int main()
{
    long end;

    cout << "enter the no. till you want to print the natural numbers:";
    cin >> end;
    for (long i = 1; i <= end; i++)
    {
        cout << i << endl;
    }
    return 0;
}
