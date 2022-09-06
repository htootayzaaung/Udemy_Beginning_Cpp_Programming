#include <iostream>
#include "Player.h"

int main()
{
  Player slayer;
  slayer.set_name("Slayer");

  Player frank;
  frank.set_name("Frank");

  Player hero("Hero");
  hero.set_name("Hero");

  Player villain("Villain", 100, 12);
  villain.set_name("Villain");

/*
At the end of the program flow all the objects created: "slayer", "frank", "hero" and "villain" will be destructed

Thus, producing the output in the REVERSE order in which they are created:

Destructor called for Villain

Destructor called for Hero

Destructor called for Frank

Destructor called for Slayer
*/

  Player *enemy = new Player;                                           //Dynamically allocated object on the heap.
  enemy->set_name("Enemy");                                             //Alternatively, "(*enemy).set_name("Enemy")" would work the same

  Player *level_boss = new Player ("Level Boss", 1000, 300);             //Dynamically allocated object on the heap.
  (*level_boss).set_name("Level Boss");                                  //Alternatively, "level_boss->set_name("Level Boss")" would work the same

  //Deleting dynamically allocated objects on the heap.
  delete enemy;
  delete level_boss;
  return 0;
}
