// print fibbonacci series upto n terms
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "enter the end";
    cin >> n;
    int firstNum = 0;
    int nextNum = 1;
    int a = 0;
    cout << "fiboonacci series is ";
    for (int i = 1; i <= 10; i++)
    {
        cout << a << " ";
        firstNum = nextNum;
        nextNum = a;
        a = firstNum + nextNum;
    }

    return 0;
}