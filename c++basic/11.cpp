// write a c++ program to enter to base and height of a triangle and find its area;
#include <iostream>
using namespace std;
int main()
{
    int base, height, area;
    cout << "Enter the value of base and height" << endl;
    cin >> base >> height;
    area = (base * height) / 2;
    cout << "area of triangle is " << area;
}
