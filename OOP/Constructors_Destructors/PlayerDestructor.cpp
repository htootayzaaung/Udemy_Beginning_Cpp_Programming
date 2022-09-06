#include <iostream>

class Player
{
  private:
    std::string name;
    int health;
    int xp;

  public:
    //3 Overloaded Constructors
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    /*
    Notice that the constructors have the same name as the class and they don't specify a return type.
    */
    ~Player();          //Destructor
};
