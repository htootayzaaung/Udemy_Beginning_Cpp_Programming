#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1;                        // Empty string
  string s2 {"Frank"};              // "Frank"
  string s3 {s2};                   // s2 = "Frank", therefore "Frank"
  string s4 {"Frank", 3};           // "Fra" - up to the third character
  string s5 {s3, 0, 2};             // "Fr" - from character index 0 to index one less than 2
  string s6 (3, 'X');               // XXX

  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  cout << s5 << endl;
  cout << s6 << endl;

  return 0;
}
