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
{
  name = "None";
  health = 0;
  xp = 0;
}

Player::Player(std::string inputName)
{
  name = inputName;
  health = 0;
  xp = 0;
}

Player::Player(std::string inputName, int health_value, int xp_value)
{
  name = inputName;
  health = health_value;
  xp = xp_value;
}

void print_player_details(Player obj)
{
  cout << obj.get_name() << endl;
  cout << "Health: " << obj.get_health() << endl;
  cout << "Xp; " << obj.get_xp() << endl;
}
