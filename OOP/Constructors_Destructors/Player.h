#ifndef _PLAYER_H_
#define _PLAYER_H_
using namespace std;

class Player
{
  private:
    std::string name;
    int health;
    int xp;

  public:
    //3 Overloaded Constructors
    Player()
    {
        cout << "No args constructor called" << endl << endl;
    }

    Player(std::string name)
    {
      cout << "String arg constructor called" << endl;
      cout << "name: " << name << endl << endl;
    }

    Player(std::string name, int health, int xp)
    {
      cout << "Three args constructor called" << endl;
      cout << "name: " << name << endl << "health: " << health << endl << "xp: " << xp << endl << endl;
    }

    void set_name(std::string name_set)
    {
      name = name_set;
      cout << name << endl << endl;
    }
    /*
    Notice that the constructors have the same name as the class and they don't specify a return type.
    */
    ~Player()          //Destructor
    {
      cout << "Destructor called for " << name << endl << endl;
    }
};

#endif
