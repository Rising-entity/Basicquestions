// write a c++ program to enter teperature in celsius and convert it into the farenite
#include <iostream>
using namespace std;
int main()
{
    float tempC, tempF;
    cout << "enter the temperatute in celcius" << endl;
    cin >> tempC;
    tempF = (tempC * 9 / 5) + 32;
    cout << "thye temperatute in farenite is " << tempF;
}