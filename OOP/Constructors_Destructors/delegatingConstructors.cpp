#include "delegatingConstructors.h"

int main()
{
  Player derrick;                         //No-args constructor calls the 3-args constructor
  print_player_details(derrick);

  cout << endl;

  Player joan{"Joan"};                    //1-arg constructor calls the 3-args constructor
  print_player_details(joan);

  cout << endl;

  Player stephen{"Stephen", 100, 47};     //3-args constructor doesn't delegate!
  print_player_details(stephen);

  cout << endl;

  derrick.OOP_style_print();

  cout << endl;

  joan.OOP_style_print();

  cout << endl;

  stephen.OOP_style_print();

  cout << endl;

  Player *htoo_aung = new Player("Htoo Aung", 100, 99);
  htoo_aung->OOP_style_print();             //Pointing towards a function inside an object

  cout << endl;

  print_player_details(*htoo_aung);         //Dereferencing an object

  cout << endl;

  delete htoo_aung;

  return 0;
}
