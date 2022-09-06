#include "Account.h"

/*
_"#include" with <> brackets as in "#include <iostream>" is used to include system header files and the compiler knows
 where these are located.

_"#include" with "" tell the compiler to include header files that are local to this project, the compiler also knows
  where those are located.
*/

void Account::set_name(std::string n)
{
  name = n;
}

std::string Account::get_name()
{
  return name;
}

void Account::deposit(double amount)
{
  balance += amount;
}

void Account::withdraw(double amount)
{
  balance -= amount;
}
