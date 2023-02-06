// Write a C++ program toggle case of each character in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"input an any string "<<endl;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97&&str[i]<=122){
            str[i]=toupper(str[i]);
        }
        else if(str[i]>=65&&str[i]<=90){
            str[i]=tolower(str[i]);
        }
        
    } 
    cout<<"string in toggle case is"<<endl;
    cout<<str;
   
    

    return 0;
}

