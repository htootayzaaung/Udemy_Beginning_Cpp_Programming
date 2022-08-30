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
      cout << "dollars: " << dollars << endl;
      total_change = (dollars * 100);
      cout << "total_change: " << total_change << endl;
      inputCents = inputCents - total_change;
      cout << "inputCents: " << inputCents << endl;
      continue;
    }

    else if (inputCents / 25 >= 1)
    {
      quarters = inputCents / 25;
      cout << "quarters: " << quarters << endl;
      total_change = (quarters * 25);
      cout << "total_change: " << total_change << endl;
      inputCents = inputCents - total_change;
      cout << "inputCents: " << inputCents << endl;
      continue;
    }

    else if (inputCents / 10 >= 1)
    {
      dimes = inputCents / 10;
      cout << "dimes: " << dimes << endl;
      total_change = (dimes * 10);
      cout << "total_change: " << total_change << endl;
      inputCents = inputCents - total_change;
      cout << "inputCents: " << inputCents << endl;
      continue;
    }

    else if (inputCents / 5 >= 1)
    {
      nickels = inputCents / 5;
      cout << "nickels: " << nickels << endl;
      total_change = (nickels * 5);
      cout << "total_change: " << total_change << endl;
      inputCents = inputCents - total_change;
      cout << "inputCents: " << inputCents << endl;
      continue;
    }

    else if (inputCents / 1 >= 1)
    {
      pennies = inputCents / 1;
      cout << "pennies: " << pennies << endl;
      total_change = (pennies * 1);
      cout << "total_change: " << total_change << endl;
      inputCents = inputCents - total_change;
      cout << "inputCents: " << inputCents << endl;
      continue;
    }

    total_change = 0;

  } while (inputCents != 0);

  cout << "\n\n";
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
