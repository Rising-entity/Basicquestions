//write a c++ program to print the multiplication table of any number till the end;
#include <iostream>
using namespace std;
int main()
{
    int num, end;
    cout << "enter the number:";
    cin >> num;
    cout << "enter the number till you want to print the multiplication table";
    cin >> end;
    for (int i = 1; i <= end; i++)
    {
        int table = num * i;
        cout << table << endl;
    }
}