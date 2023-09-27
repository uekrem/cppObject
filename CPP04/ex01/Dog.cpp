#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog construct" << std::endl;
    this->type = "Dog";
    this->ptr_brain = new Brain();
}

Dog::~Dog(){
    delete this->ptr_brain;
    std::cout << "Dog destruct" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Hav" << std::endl;
}