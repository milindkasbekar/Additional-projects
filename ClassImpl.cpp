#include <iostream>
#include <string>
using namespace std;

class Character
{
  public:
    int health;

    Character() {health = 100;}
};

int main()
{
  Character player1;
  cout << player1.health << endl;
}