// print natural numbers from 1 to n ;

#include<bits/stdc++.h>
using namespace std;
void print(int start, int end) {
    // base case :
    if (start ==end+1)
        return;

    cout << start << " "; //processing part
    start++; //processing part
    print(start, end);//recursive call



}

int main(int argc, char const* argv[])
{

    int n;
    cout << "enter the end" << endl;
    cin >> n;
    cout << "natural numbers from 1 to n are " << endl;
    print(1, n);
    return 0;
}
