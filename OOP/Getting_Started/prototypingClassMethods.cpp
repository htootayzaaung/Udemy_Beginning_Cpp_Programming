#include <iostream>
using namespace std;

class Account
{
  private:
    double balance;

  public:
    //Function prototypes
    void set_balance(double bal);
    double get_balance();
};

//Function definitions
//"::" - the scope resolution operator shows that these methods are defined for the "Account" class

void Account::set_balance(double bal)
{
  balance = bal;
}

double Account::get_balance()
{
  return balance;
}
