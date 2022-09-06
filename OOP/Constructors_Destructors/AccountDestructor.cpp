#include <iostream>

class Account
{
  private:
    std::string name;
    double balance;

  public:
    //constructors
    Account();
    Account(std::string name, double balance);
    Account(std::string name);
    Account(double balance);

    ~Account();       //Destructor
};
