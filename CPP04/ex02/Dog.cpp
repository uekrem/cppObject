#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &r)
{
    std::cout << "Dog copy constructor called" << std::endl;
    Animal::operator=(r);
    this->brain = new Brain(*(r.brain));
}

Dog &Dog::operator=(const Dog &r)
{
    std::cout << "Dog copy assignment called" << std::endl;
    this->type = r.getType();
    brain = new Brain(*(r.brain));
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Hav Hav!" << std::endl;
}