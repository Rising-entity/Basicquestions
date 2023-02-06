// Write a C++ program to multiply two matrices
#include <iostream>

using namespace std;

int main()
{ int size=3, arr1[size][size],arr2[size][size],arrR[size][size];
 cout<<"enter the elements in first array: "<<endl;
 for (int i=0;i<3;i++) {
    for(int j=0;j<3;j++){
        cin>>arr1[i][j];
    }
 }
 cout<<"enter the elements in second array: "<<endl;
 for (int i=0;i<3;i++) {
    for(int j=0;j<3;j++){
        cin>>arr2[i][j];
    }
 }
 cout<<"resultant array after the multiplication is :"<<endl;
 for(int i=0;i<size;i++)
 { for(int j=0;j<size;j++){
     int sum=0;
     for(int k=0;k<size;k++){
         sum+=arr1[i][k]*arr2[k][j];
         
     } 
     arrR[i][j]=sum;
     cout<<arrR[i][j]<<" ";
 }
 cout<<endl;
     
 }
    

    return 0;
}
