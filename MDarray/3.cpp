// write a program thta reads a 5 x 5 array of integers and then prints the row sum and the column sum:
// enter row1: 8,3,9,0,10
// enter row2:3,5,17,1,1
// enter row3:2,8,6,23,1
// enter row4:15,7,3,2,9
// enter row5:6,14,2,6,0
#include <iostream>

using namespace std;

int main()
{   int sum=0;
    int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    cout<<"row total =";   
    for(int i=0;i<5;i++)
    { sum=0;
        for(int j=0;j<5;j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<"\n";
    cout<<"column total ="   ;
    for(int j=0;j<5;j++)
    { sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
  
    return 0;
}