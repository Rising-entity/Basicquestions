// Write a C++ program to find sum of each row and column of a matrix
#include <iostream>

using namespace std;

int main()
{
    int size = 3, arr[size][size], sum = 0;
    cout << "enter the aray elemnts" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for row sum
    for (int i = 0; i < size; i++)
    {
        sum = 0;
        for (int j = 0; j < size; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of row " << i + 1 << " is " << sum << endl;
    }
    cout << endl;
    // for column sum
    for (int j = 0; j < size; j++)
    {
        sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i][j];
        }
        cout << "sum of column " << j + 1 << " is " << sum << endl;
    }
}
