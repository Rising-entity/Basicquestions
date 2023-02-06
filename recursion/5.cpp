// find the reverse of a number using recursion

#include<bits/stdc++.h>
using namespace std;
int findRev(int num, int rev) {
    // base case
    if (num == 0)
        return rev;

    rev = rev * 10 + num % 10;// processing
    return findRev(num / 10, rev);

}

int main(int argc, char const* argv[])
{
    int n;
    cout << "enter the number " << endl;
    cin >> n;
    int ans = findRev(n, 0);
    cout << "reverse of a number is " << ans;


    return 0;
}
