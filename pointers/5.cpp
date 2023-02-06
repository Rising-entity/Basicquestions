// C++ program to copy one array to another using pointers;

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    int arr[100];
    int arr2[100];
    cout << "enter the size of array " << endl;
    cin >> size;
    cout << " input the array elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
    cout << "array elments in original array are " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *arr + i << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        *(arr2 + i) = *(arr + i);
    }
    cout << "array elments  after copying in another array are  " << endl;
    for (int i = 0; i < size; i++)
    {
        // cout<<*arr2+i<<" ";
        cout << arr2[i] << " ";
    }

    return 0;
}
