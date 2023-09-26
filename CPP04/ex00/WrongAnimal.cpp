#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal construct" << std::endl;
    this->type = "Animal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destruct" << std::endl;
}

void    WrongAnimal::makeSound(){
    std::cout << "none sound" << std::endl;
}