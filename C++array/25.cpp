// C++ program to perform Scalar matrix multiplication
#include <iostream>

using namespace std;

int main()
{ int size=3; int arr[size][size],arrR[size][size];int multiplier;
cout<<"enter the multiplier"<<endl;
cin>>multiplier;
  cout<<"enter the elements in array "<<endl;
  for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
          cin>>arr[i][j];
      }
  }
  for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
         arrR[i][j]=multiplier*arr[i][j];
      }
  }
   cout<<"resultant array is "<<endl;
  for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
          cout<<arrR[i][j]<<" ";
      }
      cout<<endl;
  
   

    
}
return 0;
}
