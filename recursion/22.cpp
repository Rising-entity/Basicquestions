//print array elements using recursion
#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int size, int i) {
    if (i == size)
        return;

    cout << arr[i] << " ";
    print(arr, size, ++i);
}

int main() {

    int arr[] = { 2,4,5,6 };
    int size = sizeof(arr) / 4;
    int i = 0;

    cout << "array elements are ";
    print(arr, size, i);


}