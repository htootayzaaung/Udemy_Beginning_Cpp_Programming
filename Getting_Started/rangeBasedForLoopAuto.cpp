#include <iostream>
using namespace std;

int main()
{
  int scores [] {100, 90, 97};

  for (auto score : scores)
  {
    cout << score << " ";
  }

  //"auto" does not need to explicitly declare the type of the variable

  cout << endl;

  return 0;
}
