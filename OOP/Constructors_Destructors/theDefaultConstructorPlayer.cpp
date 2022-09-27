#include <iostream>
using namespace std;

class Player
{
  private:
    std::string name;
    int health;
    int xp;

  public:
    void set_name(std::string inputName)
    {
      name = inputName;
    }

    std::string get_name()
    {
      return name;
    }

    int get_health()
    {
      return health;
    }

    int get_xp()
    {
      return xp;
    }

    //Deafault constructor
    Player()                        //Overloading constructors
    {
      name = "None";
      health = 100;
      xp = 3;
    }

    Player(std::string inputName, int health_value, int xp_val)
    {
      name = inputName;
      health = health_value;
      xp = xp_val;
    }

};

int main()
{
  Player frank;
  frank.set_name("Frank");
  cout << frank.get_name() << endl;
  cout << "Health: " << frank.get_health() << endl << "Xp: " << frank.get_xp() << endl;

  cout << endl;

  Player emma {"Emma", 100, 50};
  cout << emma.get_name() << endl;
  cout << "Health: " << emma.get_health() << endl << "Xp: " << emma.get_xp() << endl;

  return 0;
}
