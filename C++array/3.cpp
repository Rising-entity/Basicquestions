//Write a C program to find sum of all array elements.
#include <iostream>

using namespace std;

int main()
{
    int size, sum = 0, arr[size];
    cout << "enter the size of an array: ";
    cin >> size;
    cout << "enter the array elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    cout << "the sum of array elements is : ";
    cout << sum;

    return 0;
}