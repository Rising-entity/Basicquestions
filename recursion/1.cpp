// find the power of any number using recursion
#include<bits/stdc++.h>
using namespace std;
float findPower(float base, float power) {
    // base condition
    if (power == 0)
        return 1;
    else if (power > 0)
    {
        // recursive relation
        return (base * findPower(base, power - 1));

    }
    else if (power < 0)
    {
        // recursive relation
        return(1 / base * findPower(base,power+1));
    }

}
int main(int argc, char const* argv[])
{
    float base, power;
    cout << "enter the base and power " << endl;
    cin >> base >> power;
    float ans = findPower(base, power);
    cout << "answer is " << ans << endl;
    return 0;
}
