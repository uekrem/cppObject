#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal construct" << std::endl;
    this->type = "Animal";
}

Animal::~Animal(){
    std::cout << "Animal destruct" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}