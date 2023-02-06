
//Write a C program to find maximum and minimum element in an array.
#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "enter the size of an array : ";
    cin >> size;
    int arr[size];
    cout << "enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    //consider
    int max = arr[0];
    //and
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << "maximum element in the array is :";
    cout << max;
    cout << "minimum element in the array is :";
    cout << min;
    return 0;
}
