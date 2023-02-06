//Write a C program to delete an element from an array at specified position.
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4}, position;
    int size = sizeof(arr) / sizeof(int);
    cout << "source arry is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter the position from where you want to delete an elemnt :";
    cin >> position;
    for (int i = position; i < size; i++)
    {
        // arr[position-1]=arr[position]; here i is updating not position
        arr[i - 1] = arr[i];
    }
    size -= 1;
    cout << "updated arry after delation is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}