#include <iostream>
#include "Player.h"
using namespace std;

void display_active_players();

int main()
{
  display_active_players();

  Player hero {"Hero"};

  display_active_players();

  {
    Player frank{"Frank"};
    display_active_players();
  }

  display_active_players();

  Player *enemy = new Player("Enemy", 100, 100);
  display_active_players();

  delete enemy;

  return 0;
}

void display_active_players()
{
  cout << "Active players: " << Player::get_num_players() << endl;
}
