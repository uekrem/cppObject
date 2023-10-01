#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat &r):Animal(r)
{
    this->type = r.type;
    this->brain = new Brain(*(r.brain));
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &r)
{
	this->type = r.getType();
    this->brain = new Brain(*(r.brain));
	return (*this);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meov" << std::endl;
}