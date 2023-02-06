// write a c++ program to merge two array to third array ;
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int size1, size2;
    cout << "enter the size1 and size1" << endl;
    cin >> size1 >> size2;
    int arr1[size1], arr2[size2];
    cout << "enter the array one elemnts " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "enter the array two elemnts " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    int index1 = 0, index2 = 0, mergeindex = 0, mergesize = size1 + size2;
    int mergearr[mergesize];
    while (1)
    {
        if ((index1 >= size1) || (index2 >= size2))
        {
            break;
        }

        if (arr1[index1] < arr2[index2])
        {
            mergearr[mergeindex] = arr1[index1];
            index1++;
        }
        else if (arr1[index1] > arr2[index2])
        {
            mergearr[mergeindex] = arr2[index2];
            index2++;
        }
        mergeindex++;
    }
    // store remaining elemnts
    while (1)
    {
        if (index1 >= size1)
        {
            break;
        }

        if (index1 < size1)
        {
            mergearr[mergeindex] = arr1[index1];
        }
        index1++;
        mergeindex++;
    }
    while (1)
    {
        if (index2 >= size2)
        {
            break;
        }

        if (index2 < size2)
        {
            mergearr[mergeindex] = arr1[index2];
        }
        index2++;
        mergeindex++;
    }

    cout << "merged array elemnts are" << endl;
    for (int i = 0; i < mergesize; i++)
    {
        cout << mergearr[i] << " ";
    }

    return 0;
}
