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
    Player(const Player &source);

    //Destructor
    ~Player()

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

                        //Non-Constructor initialization list
/*
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
*/

//Constructor Initialization Lists
//_____________________Strictly follows the format as below_____________________

/* Overloaded constructors in the form of constructor initialization lists */

Player::Player()
  : name {"None"}, health {0}, xp {0}
{}

Player::Player(std::string inputName)
  : name {inputName}, health {0}, xp {0}
{}

Player::Player(std::string inputName, int health_value, int xp_value)
  : name {inputName}, health {health_value}, xp {xp_value}
{}

void print_player_details(Player obj)
{
  cout << obj.get_name() << endl;
  cout << "Health: " << obj.get_health() << endl;
  cout << "Xp; " << obj.get_xp() << endl;
}

//Copy-constructors:

Player create_super_enemy()
{
  Player an_enemy {"Super Enemy", 1000, 1000};
  return an_enemy;
}

//Copy-constructors with Constructor_initialization_lists:

Player::Player(const Player &source)
  : name {source.name},
    health {source.health},
    xp {source.xp}
{}
