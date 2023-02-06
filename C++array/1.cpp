//Write a C program to read and print elements of array.
#include <iostream>

using namespace std;

int main()
{ //  int arr[]={10,34,23,45,56,778};
    //     cout<<"the elements of array are ";
    //     for (int i=0; i<sizeof(arr)/4;i++) {
    //         cout<<arr[i]<<" ";
    int size, arr[size];
    cout << "enter the size of an array: ";
    cin >> size;
    cout << "enter the array elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enterded array elements are:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
