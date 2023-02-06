//Find the frequency of each element of the array
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 6, 8, 6, 9, 9}, freq[100]; //if we not define the size of the array frequency as n number then it will give you error
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        freq[i] = -1;
    }
    int i = 0;
    while (i < size)
    {
        int count = 1;
        for (int j = 1; j < size; j++)
        {
            if (arr[i] == arr[j + i])
            {
                freq[j + i] = 0;

                count++;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
            //cout<<"the frequency of element "<<arr[i]<<" is "<<freq[i]<<endl;
        }

        i++;
    }
    //also we can print the frequncy like this;
    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
            cout << "the frequency of element " << arr[i] << " is " << freq[i] << endl;
    }

    return 0;
}
