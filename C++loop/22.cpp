//Write a C program to print Prime number between 1 and n.
#include <iostream>

using namespace std;

int main()
{ int start,end,sum;
 cout<<"enter the start:";
 cin>>start;
 cout<<"enter the end :";
 cin>>end;
 for (start; start<=end;start++) {
     int a=1+start;
    int b=start;
    sum=0;
     for(int i=1;i<=start;i++)
     {
        if(start%i==0)
         sum=sum+i;
     }
     if(sum==a&& b>1)
     cout<<b<<" ";
     else
     cout<<"not";
     
 }

 
    return 0;
}
