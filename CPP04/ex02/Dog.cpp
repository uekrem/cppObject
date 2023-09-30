#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog construct" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &r)
{
    this->type = r.type;
    this->brain = new Brain(*r.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog destruct" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Hav" << std::endl;
}