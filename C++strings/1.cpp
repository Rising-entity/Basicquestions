// Write a C++ program to find length of a string.
//we can also find it by using str.size() and str.length() function
#include <iostream>
#include<string>

using namespace std;

int main()
{
     int count=0;
     string str;
     getline(cin,str);
     cout<<str<<endl;
     for(int i=0;str[i]!='\0';i++){
         count++;
     }
     cout<<"the size of the string is "<<count;

    return 0;
}