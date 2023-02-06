// Write a C++ program to find sum of lower triangular matrix.
#include <iostream>

using namespace std;

int main()
{
    int size = 3, arr[size][size], sum = 0;
    cout << "enter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i > j)
                sum += arr[i][j];
        }
    }
    cout << "the sum of lower triangular matrix is " << sum << endl;

    return 0;
}
