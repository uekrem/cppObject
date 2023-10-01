#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat &r)
{
    std::cout << "Cat copy constructor called" << std::endl;
    Animal::operator=(r);
    this->brain = new Brain(*(r.brain));
}

Cat &Cat::operator=(const Cat &r)
{
    std::cout << "Cat copy assignment called" << std::endl;
	this->type = r.getType();
    this->brain = new Brain(*(r.brain));
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meov" << std::endl;
}