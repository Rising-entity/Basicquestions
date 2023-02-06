// C++ program to add two numbers using pointers

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,*ptra,*ptrb;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    ptra=&a,ptrb=&b;
    cout<<"the sum of a and b is "<<*ptra+*ptrb;
    

    return 0;
}