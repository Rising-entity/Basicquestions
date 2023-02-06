//find fibbonachhi series till nth term
#include <iostream>
using namespace std;
int findFibbo(int x) {
    // base case
    if (x == 0 || x == 1)
        return x;

    // recursive realation
    return(findFibbo(x - 1) + findFibbo(x - 2));
}

int main() {
    // Write C++ code here
    int n = 0;
    cout << "enter the term " << endl;
    cin >> n;
    cout << "fibbonacchi terms are " << endl;
    int i = 0;
    while (i < n) {
        cout << findFibbo(i) << " ";
        i++;
    }

    return 0;
}