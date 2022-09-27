#incldue <iostream>
using namespace std;

class Account
{
  private:
    std::string name;
    double balance;

  public :

    //No Args Constructor
    Account()
    {
      name = "None";
      balance = 0.0;
    }
    bool withdraw(double amount);
    bool deposit(double amount);
};
