#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
	//attributes:
		string name {"Player"};
		int health {100};
		int xp {3};
	

	//methods:
		void talk(string);
		bool is_dead();
};

class Account
{
	//attributes:
		string name;
		double balance;

	//methods:
		bool deposit(double);
		bool withdraw(double);
	
};

int main()
{
	//Creating objects:
		Player frank;
		Player hero;
		
				
		Player players[] {frank, hero};		//an array containing objects

		vector<Player> player_vec {frank};	//a vector containing objects
		player_vec.push_back(hero);		//appends another object to a vector

		Player *enemy {nullptr};		//creating a pointer-variable to an object an initializing it into "nullptr"
		enemy = new Player;

		delete enemy;				//deleting a pointer-variable from the heap


	return 0;
}
