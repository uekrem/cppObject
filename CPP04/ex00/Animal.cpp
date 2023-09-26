#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal construct" << std::endl;
    this->type = "Animal";
}

Animal::~Animal(){
    std::cout << "Animal destruct" << std::endl;
}

void    Animal::makeSound(){
    std::cout << "none sound" << std::endl;
}