// Write a C++ program to convert lowercase string to lowercase.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"input an any string "<<endl;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]);
        
    } 
    cout<<"string in uppercase is"<<endl;
    cout<<str;
   
    

    return 0;
}
