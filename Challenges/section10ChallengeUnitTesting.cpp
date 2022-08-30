#include <iostream>
#include <string>
using namespace std;

int main()
{
  char character;
  int digit;

  cout << "Enter a character: ";
  cin >> character;

  cout << "Enter a digit: ";
  cin >> digit;

  cout << "ASCII Value of " << character << " is " << int(character) << endl;
  cout << "Alphanumeric value of " << digit << " is " << char(digit) << endl;
  cout << "Alphanumeric value of " << digit << " shifted 1 is " << char(digit + 1) << endl;
  return 0;
}
