#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun){
    HumanA::name = name;
    HumanA::gun = &gun;
}

HumanA::~HumanA(){
}

void    HumanA::attack(){
    std::cout << HumanA::name << " attacks with their " << HumanA::gun->gettype() << std::endl; 
}