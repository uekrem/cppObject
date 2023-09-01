#include "Zombie.hpp"

int main()
{
    Zombie  *monster;

    monster = zombieHorde(5, "bet");
    for (int i = 0; i < 5; i++)
        monster[i].announce();
    delete [] monster;
}