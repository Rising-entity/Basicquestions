//Write a C program to find all factors of a number
#include <iostream>

using namespace std;

int main()
{ int num;
cout<<"enter the number:";
cin>>num;
cout<<"the factors of "<<num<<" are :";
    
    for (int i=1;i<=num;i++) {
         if(num%i==0)
         cout<<i<<", ";
    }
        
    

    return 0;
}
