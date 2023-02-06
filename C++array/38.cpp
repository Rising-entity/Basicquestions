// C++ program to check Identity matrix
#include <iostream>

using namespace std;

int main()
{
    int size = 3, arr[size][size], isIden = 1;
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
            if (i != j && arr[i][j] != 0)
            {
                isIden = 0;
                break;
            }
            if (i == j && arr[i][j] != 1)
            {
                isIden = 0;
                break;
            }
        }
    }
    if (isIden == 1)
        cout << "its a identity matrix";
    if (isIden == 0)
        cout << "its not a identity matrix";

    return 0;
}
