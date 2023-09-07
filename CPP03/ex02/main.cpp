#include "FragTrap.hpp"

int main()
{
    FragTrap usr1("uqqu");
    FragTrap usr2("bet");
    FragTrap usr3("turan");

    usr1.attack("bet");
    usr2.takeDamage(50);
    usr2.attack("turan");
    usr3.takeDamage(80);
    usr2.attack("uqqu");
    usr1.takeDamage(30);
    usr3.beRepaired(20);
    usr3.attack("uqqu");
    usr1.takeDamage(40);
    usr2.attack("turan");
    usr3.takeDamage(70);
    usr1.attack("turan");
    usr3.takeDamage(10);
    usr1.highFivesGuys();
}