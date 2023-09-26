#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat construct" << std::endl;
    this->type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destruct" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Meov" << std::endl;
}
