#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
  Account frank_account;
  frank_account.set_name("Frank");
  frank_account.set_balance(1000.00);
  double bal = frank_account.get_balance();

  cout << "Account owner: " << frank_account.get_name() << endl;
  cout << "Balance: " << bal << endl;
  frank_account.deposit(1500);
  cout << "Balance after 1st Depost: " << frank_account.get_balance() << endl;
  frank_account.withdraw(500);
  cout << "Balance after 1st Withdrawal :" << frank_account.get_balance() << endl;

  return 0;
}
