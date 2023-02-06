// write a c++ program to convert  days in years, weeks amd days
 #include<iostream>
 using namespace std;
 int main()
 { int days, years, weeks;
  cout<<"enter days:";
  cin>>days;
 
    years= days/365;
    weeks=(days-(years*365))/7;
    days=days-((years*365)+(weeks*7));
    cout<<years<<endl;
    cout<<weeks<<endl;
    cout<<days<<endl;
      
     
     
     
     
     
     
     
 }