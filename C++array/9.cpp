//Write a C program to insert an element in an array.
#include<iostream>
using namespace std;
int main(){
     int arr[]={1,2,3,4,5,6,7,8},index,ele;
     int size=sizeof(arr)/sizeof(int);
     cout<<"the array elemnts of source arry are : ";
     for (int i=0;i<size;i++) {
         cout<<arr[i]<<" ";
         
     }
     cout<<endl;
     cout<<"enter the elment that you wanted to insert in an array ";
     cin>>ele;
     cout<<"enter the index where you wanted to insert an element "  ;
     cin>>index;
     
     for(int i=size;i>=index;i--)//if we write size-- then it will change the value of size ,so we can face the problem in downward steps
     { 
         arr[i]=arr[i-1];
         
         
     }
     arr[index]=ele;
     size=size+1;                   //********************
     cout<<"updated array is ";
     for (int i=0;i<size;i++) {
         cout<<arr[i]<<" ";
         
     }
     
     
     
     
     
     
     
     
     
    
    
}
