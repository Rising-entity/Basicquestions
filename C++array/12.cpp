
//Write a C program to print all unique elements in the array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 1, 5, 20, 2, 12, 10}, freq[100];

    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        freq[i] = -1;
    }

    int i = 0;

    while (i < size)
    {
        for (int j = i+1; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                freq[i] = 0;
                freq[j] = 0;
            }
        }

        i++;
    }

    cout << "unique elements in the array are :";
    for (int i = 0; i < size; i++)

    {
        if (freq[i] != 0)
            cout << arr[i] << " ";
    }

    return 0;
// // we can also print the unique elemnts by 11.cpp by just at the writing loop like
// // printf("\nUnique elements in the array are: ");
//     for(i=0; i<size; i++)
//     {
//         if(freq[i] == 1)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
}
