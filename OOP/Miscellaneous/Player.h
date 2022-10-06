#ifndef _Player_H_
#define _Player_H_
#include <string>
using namespace std;

class Player
{
  private:
    static int num_players;
    string name;
    int health;
    int xp;

  public:
    string get_name()
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

    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    ~Player();

    static int get_num_players();
};

int Player::num_players = 0;

//This is how you assign the "static" variable "num_players" to "0".

int Player::get_num_players()
{
  return num_players;
}

//This is how you define the "static" function "get_num_players()".

Player::Player(string name_val, int health_val, int xp_val)
  : name {name_val}, health {health_val}, xp {xp_val}
  {
    num_players++;
  }

/*
This is how you update "num_players" whenever a constructor is called (i.e
whenever an object is created).
*/

Player::Player(const Player &source)
  :Player {source.name, source.health, source.xp}
{}

Player::~Player()
{
  num_players--;
}

#endif //_Player_H_
