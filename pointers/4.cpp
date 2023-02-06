// C++ program to input and print array elemnts using pointers;

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100];
    cout << " input the array elements " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *(arr + i);
    }
    cout << "array elments are " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *arr + i << " ";
    }

    return 0;
}
