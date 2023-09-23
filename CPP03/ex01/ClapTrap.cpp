#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string  name){
    ClapTrap::name = name;
    ClapTrap::hp = 10;
    ClapTrap::energy = 10;
    ClapTrap::damage = 0;
    std::cout << ClapTrap::name << " constructor" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << ClapTrap::name << " destructor" << std::endl;
}

void    ClapTrap::attack(const std::string &target){
    if (ClapTrap::hp > 0 && ClapTrap::energy > 0)
    {
        std::cout << "ClapTrap " << ClapTrap::name << " attacks " << target 
        << ",causing " << ClapTrap::damage << " points of damage " << std::endl;
        ClapTrap::energy -= -1;
    }
    else
        std::cout << ClapTrap::name << " no health or hit points already dead" << std::endl;
}
void    ClapTrap::takeDamage(unsigned int amount){
	if (amount < 0)
		std::cout << "Is not a valid value" << std::endl;
    else if (ClapTrap::hp <= 0 || ClapTrap::energy <= 0)
		std::cout << ClapTrap::name << " no health or hit points already dead" << std::endl;
    else if (amount > (unsigned int)ClapTrap::hp)
	{
		std::cout << "ClapTrap " << ClapTrap::name << " takes " << amount << " damage and died" << std::endl;
		ClapTrap::hp -= amount;
	}
	else
	{
		ClapTrap::hp -= amount;
		std::cout << "ClapTrap " << ClapTrap::name << " takes " << amount << " damage and " << ClapTrap::hp
		<< " hit points remaining" << std::endl;
	}
}
void    ClapTrap::beRepaired(unsigned int amount){
	if (amount < 0)
	{
		std::cout << "Is not a valid value" << std::endl;
		return ;
	}
    else if (ClapTrap::hp <= 0 || ClapTrap::energy <= 0)
	{
		std::cout << ClapTrap::name << " no health or hit points already dead" << std::endl;
		return ;
	}
	ClapTrap::hp += amount;
	std::cout << "ClapTrap " << ClapTrap::name << " takes " << amount << " repaired and " << ClapTrap::name << " has "
	<< ClapTrap::hp << " hit points" << std::endl;
	ClapTrap::energy--;
}

