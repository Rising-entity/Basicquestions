//write a c++ progrma to print ASCII values with their charchater
#include <iostream>

using namespace std;

int main()
{ int alpha;
int end;
cout<<"print till :";
cin>>end;
    for (alpha=1;alpha<=end;alpha++) {
        cout<<"ascii value of chrachter"<<(char)alpha<<"is"<<alpha<<endl;
    }

    return 0;
}
