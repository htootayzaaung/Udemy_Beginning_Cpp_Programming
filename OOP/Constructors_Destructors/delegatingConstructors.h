#include <iostream>
using namespace std;

class Player
{
  private:
    std::string name;
    int health;
    int xp;

  public:
    //Overloaded Constructors
    Player();
    Player(std::string inputName);
    Player(std::string inputName, int health_value, int xp_value);

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

    void OOP_style_print()
    {
      cout << name << endl;
      cout << "Health: " << health << endl;
      cout << "Xp; " << xp << endl;
    }
};

Player::Player()
  : Player {"None", 0, 0}           //No-args constructor calls the 3-args constructor (0-args constructor (delegates)-> 3 -args construcotr)
  {
    cout << "No args constructor!" << endl << endl;
  }

Player::Player(std::string inputName)
  : Player {inputName, 0, 0}        //1-arg constructor calls the 3-args constructor (1-arg constructor (delegates)-> 3-args constructor)
  {
    cout << "1 arg constructor!" << endl << endl;
  }

Player::Player(std::string inputName, int health_value, int xp_value)
  : name {inputName}, health {health_value}, xp {xp_value}      //3-args constructor calls itself, in other words, no delegation has taken place.
  {
    cout << "3 args constructor!" << endl << endl;
  }

void print_player_details(Player obj)
{
  cout << obj.get_name() << endl;
  cout << "Health: " << obj.get_health() << endl;
  cout << "Xp; " << obj.get_xp() << endl;
}
