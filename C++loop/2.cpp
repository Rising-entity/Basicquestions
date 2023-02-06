// write a c proggrame to print all natural numbers in reverse from 100 to 1;
#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    cout << "the revsre of a number from 100 to 1 is as follows" << endl;

    for (int i = 100; i >= num; i--)
    {
        cout << i << endl;
    }

    return 0;
}
