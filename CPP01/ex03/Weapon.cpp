#include    "Weapon.hpp"

std::string Weapon::gettype(){
    return (Weapon::type);
}

void Weapon::setType(std::string value){
    Weapon::type = value;
}

Weapon::~Weapon(){
}

Weapon::Weapon(std::string value){
    Weapon::type = value;
}