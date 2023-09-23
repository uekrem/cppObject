#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):FragTrap(name), ScavTrap(name){
    DiamondTrap::name = name;
    ClapTrap::name = name + "_clap_name";
    DiamondTrap::hp = FragTrap::hp;
    DiamondTrap::energy = ScavTrap::energy;
    DiamondTrap::damage = FragTrap::damage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << DiamondTrap::name <<" DiamondTrap destructor" << std::endl;
}

void    DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name is " << DiamondTrap::name 
    << " ClapTrap name is " << ClapTrap::name << std::endl;
}