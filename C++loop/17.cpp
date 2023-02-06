//Write a C program to find power of a number using for loop.
#include <iostream>

using namespace std;

int main()
{ int num,ans=1,power;
cout<<"enter the number:";
cin>>num;
cout<<"enter the power:";
cin>>power;
    if(num>=1)
    {for (int i=1;i<=power;i++) {
         ans=num*ans;
    }
        
    
    cout<<ans;}
    else
    cout<<"0";

    return 0;
}