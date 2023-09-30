#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog construct" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &r):Animal(r)
{
    this->type = r.type;
    this->brain = new Brain(*r.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &r)
{
    std::cout << "Dog copy assignment called" << std::endl;
    if (this == &r)
        return *this;
    *this = r;
    brain = new Brain(*(r.brain));
    return (*this);
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog destruct" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Hav" << std::endl;
}