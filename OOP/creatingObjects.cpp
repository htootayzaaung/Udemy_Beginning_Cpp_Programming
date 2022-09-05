#include <iostream>

class Player
{
	Player frank;
	Player hero;

	Player *enemy = new Player();		//creating a pointer to a "Player" object dynamically on the heap
	delete enemy;				//freeing the object
};
