#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    std::cout << ScavTrap::name << " ScavTrap constructor" << std::endl;
    ScavTrap::name = name;
    ScavTrap::hp = 100;
    ScavTrap::energy = 50;
    ScavTrap::damage = 20;

}

ScavTrap::~ScavTrap(){
    std::cout << ScavTrap::name <<" ScavTrap destructor" << std::endl;
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap Guard Gate!" << std::endl;
}

void    ScavTrap::attack(const std::string &target){
    if (ClapTrap::hp > 0 && ClapTrap::energy > 0)
    {
        std::cout << "ScavTrap " << ClapTrap::name << " attacks " << target 
        << ",causing " << ClapTrap::damage << " points of damage " << std::endl;
        ClapTrap::energy -= -1;
    }
    else
        std::cout << ClapTrap::name << " no health or hit points already dead" << std::endl;
}