#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),FragTrap(name), ScavTrap(name){
    DiamondTrap::name = name;
    DiamondTrap::hp = FragTrap::hp;
    DiamondTrap::energy = ScavTrap::energy;
    DiamondTrap::damege = FragTrap::damege;
}

DiamondTrap::~DiamondTrap(){
    std::cout << DiamondTrap::name <<" DiamondTrap discturactor" << std::endl;
}

void    DiamondTrap::attack(std::string const &target){
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name is " << DiamondTrap::name 
    << " ClapTrap name is " << ClapTrap::name << std::endl;
}