// C++ program to find determinant of a matrix
#include <iostream>

using namespace std;

int main()
{
    int size = 2, arr[size][size], det, det1, det2;
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
            if (i + j == 0)
                det1 = arr[i][j] * arr[!i][!j];
            if (i + j == 1)
            {
                det2 = arr[i][j] * arr[!i][!j];
                break;
            }
        }
    }
    det = det1 - det2;
    cout << "determinant of a matrix is " << det;

    return 0;
}

// #include <stdio.h>
// #define SIZE 2 // Matrix size

// int main()
// {
//     int A[SIZE][SIZE];
//     int row, col;
//     long det;

//     /* Input elements in matrix A from user */
//     printf("Enter elements in matrix of size 2x2: \n");
//     for (row = 0; row < SIZE; row++)
//     {
//         for (col = 0; col < SIZE; col++)
//         {
//             scanf("%d", &A[row][col]);
//         }
//     }

//     /*
//      * det(A) = ad - bc
//      * a = A[0][0], b = A[0][1], c = A[1][0], d = A[1][1]
//      */
//     det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

//     printf("Determinant of matrix A = %ld", det);

//     return 0;
// }