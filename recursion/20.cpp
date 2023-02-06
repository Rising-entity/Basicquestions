// find gcd of nunbers
#include <bits/stdc++.h>
using namespace std;
int findGcd(int n1, int n2, int i, int gcd) {
    // base case
    if (i == n1 || i == n2) {
        return gcd;
    }
    else if (n1 == 0 || n2 == 0)
        return gcd;

    if ((n1 % i == 0) && (n2 % i == 0))
        gcd = i;
    // recursive realation
    return findGcd(n1, n2, ++i, gcd);
}


int main() {
    // Write C++ code here
    int n1, n2;
    cout << "enter the numbers n1 and n2" << endl;
    cin >> n1 >> n2;
    int gcd = max(n1, n2);

    cout << "gcd of " << n1 << " and " << n2 << " is " << findGcd(n1, n2, 1, gcd);

    return 0;
}