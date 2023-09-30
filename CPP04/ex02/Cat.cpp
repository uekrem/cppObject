#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat construct" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &r)
{
    this->type = r.type;
    this->brain = new Brain(*r.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat destruct" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Meov" << std::endl;
}
