// Write a C++ program to find lower triangular matrix.
#include <iostream>

using namespace std;

int main()
{
    int size = 3, arr[size][size], isLower = 1;
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
            if (i < j && arr[i][j] != 0)
            {
                isLower = 0;
                break;
            }
        }
    }
    if (isLower == 1)
        cout << "its a lower triangular matrix" << endl;
    if (isLower == 0)
        cout << "its not a lower triangular matrix";

    return 0;
}
