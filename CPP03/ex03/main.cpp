#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d( "utku" );
    ScavTrap s("bet");

	d.attack("someone");
	d.takeDamage(30);
	d.beRepaired(20);
	d.whoAmI();
	s.attack("strange");
	s.takeDamage(40);
	s.beRepaired(20);
}
