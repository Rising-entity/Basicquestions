//Write a C program to count total number of even and odd elements in an array.
#include <iostream>

using namespace std;

int main()
{ int arr[]={1,2,3,4,5,6,7,8,9,},even=0,odd=0;
  for (int i=0;i<sizeof(arr)/sizeof(int);i++) {
       cout<<arr[i]<<" ";
  }
 int i=0;
 while(i<sizeof(arr)/sizeof(int)){
     
     
     if(arr[i]%2==0)
      even++;
     else if(arr[i]%2!=0)
      odd++;
     
     i++;
 }
 cout<<"total numbners of even elemnts are "<<even<<" "<<endl;
 cout<<"total numbers of odd numbers are "<<odd<<" "<<endl;

    return 0;
}