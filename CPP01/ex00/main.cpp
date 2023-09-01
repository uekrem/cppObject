#include "Zombie.hpp"

int main()
{
    Zombie  *monster;

    monster = newZombie("p_name");
    monster->announce();
    randomChump("name");
}