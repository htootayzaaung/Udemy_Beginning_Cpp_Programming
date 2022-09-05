#include <iostream>
#include <string>

using namespace std;

class Player
{
  public:
		string name;
		int health;
		int xp;

	//methods:
		void talk(Player player, string text_to_say)
    {
      cout << player.name << " says " << text_to_say << endl;
    }
		bool is_dead();
};

class Account
{
  public:
    string name;
		double balance;

	//methods:
		bool deposit(double);
		bool withdraw(double);

};

int main()
{
  Player frank;

  frank.name = "Frank";
  frank.health = 100;
  frank.xp = 12;

  cout << "Name: " << frank.name << endl;
  cout << "Health: " << frank.health << endl;
  cout << "Xp: " << frank.xp << endl;

  frank.talk(frank, "Hi there!");

  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 100;
  enemy->xp = 15;

  cout << "Name: " << enemy->name << endl;
  cout << "Health: " << enemy->health << endl;
  cout << "Xp: " << (*enemy).xp << endl;

  return 0;
}

/*
____________________
The "." dot operator
____________________
_______________________________________
Account *frank_account = new Account();

(*frank_account).balance;
(*frank_account).deposit(1000.0);
_______________________________________

_______________________
The "->" arrow operator
_______________________
_______________________________________
Account *frank_account = new Account();

frank_account->balance;
frank_account->deposit(1000.00);1
_______________________________________
*/
