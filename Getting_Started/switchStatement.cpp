#include <iostream>
using namespace std;

int main()
{
  int inputNum {0};

  cout << "Enter a number from 1-3: ";
  cin >> inputNum;

  switch (inputNum)
  {
    case 1:
      cout << "1 selected!" << endl;
      break;
      
    case 2:
      cout << "2 selected!" << endl;
      break;

    case 3:
    case 4:
      cout << "3 or 4 selected!" << endl;
      break;

    default:
      cout << "1, 2, 3, 4 NOT selected!" << endl;
  }

  return 0;
}
