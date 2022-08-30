#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str {"Frank"};

  for (int i = 0; i < str.size(); i++)
  {
    cout << str[i];
  }

  cout << endl;

  for (int i = 0; i < str.size(); i++)
  {
    cout << str.at(i);
  }

  cout << endl;

  for (char character : str)
  {
    cout << character;
  }

  cout << endl;

  for (auto element : str)
  {
    cout << element;
  }

  cout << endl;

  return 0;
}
