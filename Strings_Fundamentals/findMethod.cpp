#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1 {"This is a test"};

  cout << "Starting position of \"This\": " << s1.find("This") << endl;
  cout << "Starting position of \"is\": " << s1.find("is") << endl;
  cout << "Starting position of \"test\": " << s1.find("test") << endl;
  cout << "Starting position of \"e\": " << s1.find("e") << endl;

  cout << "Starting postion of \"is\" from starting-index = 4: " << s1.find("is", 4) << endl;
  cout << s1.find("XX") << endl;

  return 0;
}
