// write a c++ program to enter to angles of a triangle and find third triangle
#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3;
    cout << "enter angle1 and angle2 ";
    cin >> a1 >> a2;
    a3 = 180 - (a1 + a2);
    cout << "third angle is " << a3;
}
