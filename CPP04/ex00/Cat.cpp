#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &r)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = r;
}

Cat &Cat::operator=(const Cat &r)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;
	this->type = r.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meov" << std::endl;
}