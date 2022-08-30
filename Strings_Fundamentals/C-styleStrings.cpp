#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char str[80];

  strcpy(str, "Hello ");
  cout << str << endl;

  strcat(str, "World!");
  cout << str <<  endl;

  cout << "Length: " << strlen(str) << endl;

  cout << "strcmp(str, \"Another\"): " << strcmp(str, "Another") << endl;

  return 0;
}
