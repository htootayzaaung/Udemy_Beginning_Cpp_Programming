#include "overloadingConstructors.h"
using namespace std;

int main()
{
  Player derrick;
  print_player_details(derrick);

  cout << endl;

  Player joan{"Joan"};
  print_player_details(joan);

  cout << endl;

  Player stephen{"Stephen", 100, 47};
  print_player_details(stephen);

  cout << endl;

  derrick.OOP_style_print();

  cout << endl;

  joan.OOP_style_print();

  cout << endl;

  stephen.OOP_style_print();

  cout << endl;

  Player *htoo_aung = new Player("Htoo Aung", 100, 99);
  htoo_aung->OOP_style_print();             //Pointing towards a function inside an object;

  cout << endl;

  print_player_details(*htoo_aung);         //Dereferencing an object

  cout << endl;

  delete htoo_aung;

  return 0;
}
