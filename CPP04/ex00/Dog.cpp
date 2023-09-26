#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog construct" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destruct" << std::endl;
}

void    Dog::makeSound(){
    std::cout << "Hav" << std::endl;
}