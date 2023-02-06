// C++ program to swap two numbers using pointers

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cout << "input the numbers" << endl;
    cin >> a >> b;
    int *ptra = &a, *ptrb = &b;
    //  we have already solved it by using functions
    int temp = *ptrb;
    *ptrb = *ptra;
    *ptra = temp;
    cout << "after swapping the value of a is " << *ptra << " and "
         << " the value of b is " << *ptrb;

    return 0;
}