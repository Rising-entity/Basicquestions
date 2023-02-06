// find sum of all numbers from 1 to n
#include<bits/stdc++.h>
using namespace std;
int findSum(int n) {

    // base case
    if (n == 0)
        return 0;

    //  recursive relation
    return findSum(n - 1) + n;

}

int main(int argc, char const* argv[])
{
    int n;
    cout << "enter the end" << endl;
    cin >> n;
    int ans = findSum(n);
    cout << "sum of numbers from " << 1 << " to " << n << " are " << ans << endl;
    return 0;
}
