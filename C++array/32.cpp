// Write a C++ program to find upper triangular matrix.
#include <iostream>

using namespace std;

int main()
{
    int size = 3, arr[size][size], isUpper = 1;
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
            if (i > j && arr[i][j] != 0)
            {
                isUpper = 0;
                break;
            }
        }
    }
    if (isUpper == 1)
        cout << "its a upper triangular matrix" << endl;
    if (isUpper == 0)
        cout << "its not a upper triangular matrix";

    return 0;
}
