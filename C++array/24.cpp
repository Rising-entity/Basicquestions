// C++ program to find sum of two matrices of size 3x3
#include <iostream>

using namespace std;

int main()
{
    int size = 3;
    int arr1[size][size], arr2[size][size];
    int arrR[size][size];
    cout << "enter the elements in array 1" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "enter the elements in array 2" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arrR[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    cout << "resultant matrix is " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arrR[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
