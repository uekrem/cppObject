#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << Zombie::name << " dead" << std::endl;
}