#include <iostream>
using namespace std;

class frank_account
{
  private:
    double balance;

  public:

    void set_balance (double bal)               //Member methods have access to member attributes.
    {                                           //This is why getters and setters are used, whilst attributes are made "private"
      balance = bal;                            //However, methods needs to be made "public"
    }

    double get_balance()
    {
      return balance;
    }

};

int main()
{







  return 0;
}
