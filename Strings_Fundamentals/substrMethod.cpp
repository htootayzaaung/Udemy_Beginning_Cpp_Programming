#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1 {"This is a test!"};

  cout << s1.substr(0, 4) << " " << s1.substr(5, 2) << " " << s1.substr(8, 1) << " " << s1.substr(10, 4) << endl;

  return 0;
}
