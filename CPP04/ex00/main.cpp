#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal  a1;
    std::cout << "-------------\n" << std::endl;
    Dog     d1;
    std::cout << "-------------\n" << std::endl;
    Cat     c1;
    std::cout << "-------------\n" << std::endl;

    Animal*  arr[3];
    arr[0] = &a1;
    arr[1] = &d1;
    arr[2] = &c1;

    arr[0]->makeSound();
    std::cout << "-------------\n" << std::endl;
    arr[1]->makeSound();
    std::cout << "-------------\n" << std::endl;
    arr[2]->makeSound();
    std::cout << "-------------\n" << std::endl;

    std::cout << "*************************\n" << std::endl;

    WrongCat    wc1;
    std::cout << "-------------\n" << std::endl;
    WrongAnimal *wa = &wc1;
    std::cout << "-------------\n" << std::endl;
    wa->makeSound();
    std::cout << "-------------\n" << std::endl;
}