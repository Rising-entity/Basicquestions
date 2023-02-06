// write a c++ program to find reverse of an array
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "enter the size of an array " << endl;
    cin >> size;

    int arr[size];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // now find the reverse of an array
    cout << "array elemnts after reverse" << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
