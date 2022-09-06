//Include Guards BELOW!
//They are simply a series of pre-processor directives that guarantees the file will only be include once!

#ifndef _ACCOUNT_H_           //"#ifndef" reads "If not defined"
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account
{
  private:
    double balance;
    std::string name;

  public:

    void set_balance(double bal)
    {
        balance = bal;
    }

    double get_balance()
    {
      return balance;
    }

    void set_name(std::string n);

    std::string get_name();

    void deposit(double amount);

    void withdraw(double amount);
};

#endif
