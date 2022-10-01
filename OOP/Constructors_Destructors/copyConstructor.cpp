#include <iostream>
#include "Constructors_Destructors_library.h"

int main()
{
  Player enemy = create_super_enemy();
  cout << "enemy.OOP_style_print();" << endl;
  enemy.OOP_style_print();

  cout << endl;

  cout << "print_player_details(enemy);" << endl;
  print_player_details(enemy);

  cout << endl;

  Player hero {"Hero", 100, 20};
  cout << "print_player_details(hero);" << endl;
  print_player_details(hero);

  cout << endl;

  Player another_hero {hero};
  cout << "print_player_details(another_hero);" << endl;
  print_player_details(another_hero);

  cout << endl;

  Player another_hero1 = Player(another_hero);
  cout << "print_player_details(another_hero1);" << endl;
  print_player_details(another_hero1);

  return 0;
}
