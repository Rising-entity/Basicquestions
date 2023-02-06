// C++ program to interchange diagonals of a matrix
#include <iostream>

using namespace std;

int main()
{
    int size = 3, arr[size][size], temp;
    cout << "enter the array elemnts " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "entered array is " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0, j = size - 1; i < size && j >= 0; i++, j--)
    {

        temp = arr[i][i];
        arr[i][i] = arr[i][j];
        arr[i][j] = temp;
    }
    cout << "updated array is " << endl;
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
