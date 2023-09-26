#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog construct" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destruct" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Hav" << std::endl;
}