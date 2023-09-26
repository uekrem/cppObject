#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat construct" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destruct" << std::endl;
}

void    WrongCat::makeSound(){
    std::cout << "Meov" << std::endl;
}