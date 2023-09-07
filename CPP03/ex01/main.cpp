#include "ScavTrap.hpp"

int main()
{
    ScavTrap usr1("uqqu");
    ScavTrap usr2("bet");
    ScavTrap usr3("turan");   

    usr1.attack("bet");
    usr2.takeDamage(50);
    usr2.attack("turan");
    usr3.takeDamage(30);
    usr2.attack("uqqu");
    usr1.takeDamage(20);
    usr3.beRepaired(30);
    usr3.attack("uqqu");
    usr1.takeDamage(75);
    usr2.attack("uqqu");
    usr1.takeDamage(10);
    usr1.guardGate();
}