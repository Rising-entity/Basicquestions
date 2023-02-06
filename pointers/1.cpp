// lets learn pointers

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 30;
    int *ptra = &a;
    cout << *ptra << endl;
    *ptra = 10;
    cout << a << endl;
    cout << ptra << endl;
    //   pointers arithmetics
    ptra++;
    cout << ptra << endl;
    //   note: in arrays pointer incremeination or decremination is illegal
    int arr[] = {1, 2, 3, 4};
    cout << arr << endl; // print the address of arr[0]
    int *ptr = &arr[0];
    cout << ptr << endl; // print the address of arr[0]

    //   now we can acess the elemnts of above array
    for (int i = 0; i < 4; i++)
    {
        cout << *(arr + i) << " ";
        // arr++ is illegal
    }
    cout << endl;
    int arr1[] = {7, 8, 9};
    int *ptr1 = arr1;
    for (int i = 0; i < 3; i++)
    {

        cout << *(ptr1 + i) << " ";
        // ptr1++ is legal
    }
    cout << endl;

    // pointer to pointer
    int b = 20;
    int *p = &b;
    int **q = &p;
    cout << q << endl;   // it will gives the adress of pointer p
    cout << *q << endl;  // it will give the adress of b
    cout << &b << endl;  // it will give the adress of b
    cout << **q << endl; // it will give the value of b

    return 0;
}
