
//write a c++ program to enter a length in centimeter and convert into meter and kilomtere
#include <iostream>

using namespace std;

int
main ()
{
  float lcm, lm, lk;
  cout << "enter length in centimetre" << endl;
  cin >> lcm;
  lm = lcm / 100;
  lk = lcm / 100000;
  cout << "conversion of length from centimetre to meter is" << lm << endl;
  cout << "conversion of length from centimetre to kilometer is" << lk <<
    endl;

  return 0;
}
