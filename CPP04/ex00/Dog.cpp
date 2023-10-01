#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &r)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = r;
}

Dog &Dog::operator=(const Dog &r)
{
    std::cout << "Dog copy assignment constructor called" << std::endl;
    this->type = r.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Hav" << std::endl;
}