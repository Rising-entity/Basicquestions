//Write a C program to count total number of negative elements in an array.
#include <iostream>

using namespace std;

int main()
{ int arr[]={-1,1,2,3,4,5,6,7,8,9,},neg=0;
  for (int i=0;i<sizeof(arr)/sizeof(int);i++) {
       cout<<arr[i]<<" ";
  }
 int i=0;
 while(i<sizeof(arr)/sizeof(int)){
     
     
     if(arr[i]<0)
        neg++;
     i++;
 }
 cout<<"total numbners of negetive elemnts are "<<neg<<" "<<endl;

    return 0;
}