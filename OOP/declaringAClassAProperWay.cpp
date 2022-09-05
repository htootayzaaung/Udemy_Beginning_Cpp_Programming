#include <iostream>

class Player
{
  private:
    std::string name;
    int health;
    int xp;

  public:
    void_talk(std::string text_to_say);
    bool is_dead();
};

int main()
{
  Player frank;
  frank.name = "Frank";                 //Compiler error as name is "private"
  frank.health = 100;                   //Compiler error as health is "private"
  frank.talk("Ready to battle");        //Can access "public" methods

  Player *enemy = new Player();
  enemy->xp = 100;                      //Compiler error as xp is "private"
  enemy->talk ("I will hunt you down")  //Can access "public" methods

  delete enemy;

  return 0;
}
