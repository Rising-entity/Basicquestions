//Write a C program to print all negative elements in an array.
#include <iostream>

using namespace std;

int main()
{
    int size, arr[size];
    cout << "enter the size of an array: ";
    cin >> size;
    cout << "enter the array elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "negative elements in a array are:";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            cout << arr[i] << " ";
    }

    return 0;
}