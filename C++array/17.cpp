// write a c++ program to put even and odd elemnts of array in two seprate array
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "enter the size of an array  " << endl;
    cin >> size;
    int arr[size];
    cout << "enter arr elemnts " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int even[100];
    int odd[100];
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }
    cout << "output even elemnts in array" << endl;
    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "output odd elemnts in array" << endl;
    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }

    return 0;
}
