#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat construct" << std::endl;
    this->type = "Cat";
    this->ptr_brain = new Brain();
}

Cat::~Cat(){
    delete this->ptr_brain;
    std::cout << "Cat destruct" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Meov" << std::endl;
}
