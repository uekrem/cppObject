#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name){
    std::cout << FragTrap::name << " FlagTrap constructor" << std::endl;
    FragTrap::name = name;
    FragTrap::hp = 100;
    FragTrap::energy = 100;
    FragTrap::damage = 30;
}

FragTrap::~FragTrap(){
    std::cout << FragTrap::name <<" FlagTrap destructor" << std::endl;
}

void    FragTrap::highFivesGuys(){
    std::cout << FragTrap::name << " says high five buddy!" << std::endl;
}