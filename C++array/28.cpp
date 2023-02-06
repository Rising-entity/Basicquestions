// Write a C++ program to find sum of main diagonal elements of a matrix
#include <iostream>
using namespace std;
int main()
{
    int size = 3;
    int sum = 0;
    int arr[size][size];
    cout << "input elemnts in matrix:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {

        sum += arr[i][i];
    }

    cout << "sum of digonal elemnts of a matrix is :" << sum;
}