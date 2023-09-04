#include "Zombie.hpp"

int main()
{
    Zombie  *monster;

    monster = zombieHorde(9, "bet");
    for (int i = 0; i < 9; i++)
        monster[i].announce();
    delete [] monster;
}