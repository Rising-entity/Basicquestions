// write a proggrame to print all even numbers between 1 to 100 using while
#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout << "enter the starting number and ending number" << endl;
    cin >> start >> end;
    for (start; start <= end; start++)
    {
        if (start % 2 == 0)
            cout << start << endl;
    }

    return 0;
}
