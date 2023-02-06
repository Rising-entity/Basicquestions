// C++ program to find transpose of a matrix
#include <iostream>

using namespace std;

int main()
{
    int size = 3, arr[size][size], a;
    cout << "enter the array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "inputed matrix is is " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i + j == j)
            {
                a = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = a;
            }
        }
    }
    cout << "transpose of a matrix is " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
