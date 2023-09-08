#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name){
    std::cout << FragTrap::name << " FlagTrap constractor" << std::endl;
    FragTrap::hp = 100;
    FragTrap::energy = 100;
    FragTrap::damege = 30;
}

FragTrap::~FragTrap(){
    std::cout << FragTrap::name <<" FlagTrap discturactor" << std::endl;
}

void    FragTrap::highFivesGuys(){
    std::cout << FragTrap::name << " says high five buddy!" << std::endl;
}