#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1;
  s1 = "C++ Rocks!";

  string s2 {"Hello"};
  cout << s2 << endl;
  s2 = s1;

  cout << s1 << endl;
  cout << s2 << endl;

  return 0;
}
