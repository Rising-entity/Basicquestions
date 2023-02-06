// Write a C++ program to check whether two matrices are equal or not.
#include<iostream>
using namespace std;
int main(){ int size=3;int a=0;
    int arr1[size][size],arr2[size][size];
    cout<<"input elemnts in matrix1:"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr1[i][j];
        }
        
        
    }
     cout<<"input elemnts in matrix2:"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr2[i][j];
        }
        
        
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr1[i][j]!=arr2[i][j])
            {a=1;
            break;
            
            
            }
        }
        
        
    }
    if(a==0)
    cout<<"both matrices are equal";
    else
    cout<<"matrices are not equal";
    
    
    
    
    
    
    
    
}