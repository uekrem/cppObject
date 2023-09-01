#include "Zombie.hpp"

int main()
{
    Zombie  *monster;

    monster = newZombie("p_name");
    monster->announce();
    delete monster;
    randomChump("name");
}