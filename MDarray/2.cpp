// Initializing #d arrays
#include <iostream>

using namespace std;

int main()
{
    int arr[2][2][3]={{{1,23,56},{45,678,77}},{{5,5,3},{2,3,5}}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
           { cout<<arr[i][j][k]<<" ";}
            cout<<"\n";
        }
        cout<<"\n";
    }

    return 0;
}
