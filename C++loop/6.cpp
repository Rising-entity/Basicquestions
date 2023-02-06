

// write a c proggrame to  find sum of all natural numberes between 1 to 10

#include <iostream>

using namespace std;

int main()
{
    int sum = 0, start, end;
    int s = start;
    cout << "enter the starting number and ending number" << endl;
    cin >> start >> end;
    for (start; start <= end; start++)
    {
        if (start % 2 == 0)
        {
            sum = sum + start;
        }
    }
    cout << "sum of even numbers from " << s << " to " << end << " is " << sum;

    return 0;
}
