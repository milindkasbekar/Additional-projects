#include <iostream>
#include <string>
using namespace std;

class Character
{
  protected:
    int health;

  public:
    Character() {health = 100;}
    int getHealth(){return health;}
    virtual void getHurt(int hurtValue){health -= hurtValue;}
};

class Monster : public Character
{
  public:
    virtual void getHurt(int hurtValue){health -= (2*hurtValue);}
};

int main()
{
  Character player1;
  Monster ogre1;
  cout <<"Player's Health: "<< player1.getHealth() << endl;
  player1.getHurt(10);
  cout <<"Player's Health: "<< player1.getHealth() << endl;

  cout <<"Ogre's Health: "<< ogre1.getHealth() << endl;
  ogre1.getHurt(10);
  cout <<"Ogre's Health: "<< ogre1.getHealth() << endl;

return 0;
}