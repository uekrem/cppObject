#include "ClapTrap.hpp"

int main()
{
    ClapTrap usr1("uqqu");
    ClapTrap usr2("bet");
    ClapTrap usr3("turan");    

    usr1.attack("bet");
    usr2.takeDamage(4);
    usr2.attack("turan");
    usr3.takeDamage(6);
    usr2.attack("uqqu");
    usr1.takeDamage(8);
    usr3.beRepaired(3);
    usr3.attack("uqqu");
    usr1.takeDamage(5);
    usr2.attack("uqqu");
    usr1.takeDamage(3);
}