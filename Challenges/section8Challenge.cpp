#include <iostream>
using namespace std;

void printChange(int dollars, int quarters, int dimes, int nickels, int pennies);

int main()
{
  int inputCents;
  int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
  int total_change {};

  cout << "Enter an amount in cents: ";
  cin >> inputCents;
  cout << endl;

  do
  {
    if (inputCents / 100 >= 1)
    {
      dollars = inputCents / 100;
      total_change = (dollars * 100);
      inputCents = inputCents - total_change;
      continue;
    }

    else if (inputCents / 25 >= 1)
    {
      quarters = inputCents / 25;
      total_change = (quarters * 25);
      inputCents = inputCents - total_change;
      continue;
    }

    else if (inputCents / 10 >= 1)
    {
      dimes = inputCents / 10;
      total_change = (dimes * 10);
      inputCents = inputCents - total_change;
      continue;
    }

    else if (inputCents / 5 >= 1)
    {
      nickels = inputCents / 5;
      total_change = (nickels * 5);
      inputCents = inputCents - total_change;
      continue;
    }

    else if (inputCents / 1 >= 1)
    {
      pennies = inputCents / 1;
      total_change = (pennies * 1);
      inputCents = inputCents - total_change;
      continue;
    }

    total_change = 0;

  } while (inputCents != 0);

  printChange(dollars, quarters, dimes, nickels, pennies);

  return 0;
}

void printChange(int dollars, int quarters, int dimes, int nickels, int pennies)
{
  cout << "dollars  : " << dollars << endl;
  cout << "quarters : " << quarters << endl;
  cout << "dimes    : " << dimes << endl;
  cout << "nickels  : " << nickels << endl;
  cout << "pennies  : " << pennies << endl;
}
