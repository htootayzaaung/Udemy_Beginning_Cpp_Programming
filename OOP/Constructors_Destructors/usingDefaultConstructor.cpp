#include <iostream>
using namespace std;

class Account
{
  private:
    std::string name;
    double balance;

  public:
    bool withdraw(double amount);
    bool deposit(double amount);
};

int main()
{
  Account frank_account;
  Account jim_account;

  Account *mary_account = new Account;

  delete mary_account;

  return 0;
}
