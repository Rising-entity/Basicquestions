//Write a C program to copy all elements from an array to another array.
#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
    },
        neg = 0, i = 0;
    int arr2[] = {};
    cout << "its a first arr:" << endl;
    for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    int j = 0;
    cout << "copied array elemnts are" << endl;
    while (j < sizeof(arr1) / sizeof(int))
    {

        arr2[j] = arr1[i];
        cout << arr2[j] << " ";
        j++; 
        i++;
    }

    return 0;
}
