// write a c++ program to enter marks of five subjects and calculate total ,average and percentage;
#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3, s4, s5;
    cout << "Enter the marks of five subjects repectively" << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    int total = s1 + s2 + s3 + s4 + s5;
    int average = total / 5;
    float percentage = (total / (float)500) * 100;
    cout << "Total marks are " << total << endl;
    cout << "Average is " << average << endl;
    cout << "Percentage are " << percentage;
}
 