// Write a cpp program to find the second largest elemnt in an array

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    int max1 = INT_MIN;
    int max2 = max1;
    cout << "enter the size of an array " << endl;
    cin>>size;
    int arr[size];
    cout << "enter the arrya elemnts" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max1)
        {
            max2= arr[i];
        }
        
    }
    cout<<"second largest element is "<<max2;

    return 0;
}
