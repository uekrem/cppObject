#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *monster = new Zombie[5];

    for (int i = 0; i < N; i++)
        monster[i].name = name;
    return (monster);
}