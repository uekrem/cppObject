#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    std::cout << ScavTrap::name << " ScavTrap constractor" << std::endl;
    ScavTrap::hp = 100;
    ScavTrap::energy = 50;
    ScavTrap::damege = 20;

}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap discturactor" << std::endl;
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap Guard Gate!" << std::endl;
}

void    ScavTrap::attack(const std::string &target){
    if (ClapTrap::hp > 0 && ClapTrap::energy > 0)
    {
        std::cout << "ScavTrap " << ClapTrap::name << " attacks " << target 
        << ",causing " << ClapTrap::damege << " points of damage " << std::endl;
        ClapTrap::energy -= -1;
    }
    else
        std::cout << ClapTrap::name << " no health or hit points already dead" << std::endl;
}