// initializing 2D arrys
#include <iostream>

using namespace std;

int main()
{
    int arr[2][5]={{1,2,3,4,5},{2,3,4,5,6,}};
    for (int i=0;i<2;i++) {
    for(int j=0;j<5;j++){
        cout<<arr[i][j]<<" ";
        
    }    
     cout<<"\n";
    
    }

    return 0;
}