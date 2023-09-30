#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal construct" << std::endl;
    this->type = "Animal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destruct" << std::endl;
}

void    WrongAnimal::makeSound() const{
    std::cout << "none sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (this->type);
}