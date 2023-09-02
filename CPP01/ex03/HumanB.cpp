#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    HumanB::name = name;
}

HumanB::~HumanB(){
}

void    HumanB::setWeapon(Weapon &gun){
    HumanB::gun = &gun;
}

void    HumanB::attack(){
    std::cout << HumanB::name << " attacks with their " << HumanB::gun->gettype() << std::endl; 
}