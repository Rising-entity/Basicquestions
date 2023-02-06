// write a program to print even numbers from 1 to n using recursion

#include<bits/stdc++.h>
using namespace std;
void print(int end, int num) {
    // base case
    if (num >= end)
        return;

    cout << num << " ";
    print(end, num+2);


}
int main(int argc, char const* argv[])
{
    int n;
    cout << "enter the end " << endl;
    cin >> n;
    cout << "even numbers from 1 to n are " << endl;
    print(n, 2);
    return 0;
}
