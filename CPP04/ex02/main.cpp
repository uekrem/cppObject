#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    std::cout << "-----------------\n" << std::endl;
    const Animal* i = new Cat();
    std::cout << "-----------------\n" << std::endl;
    delete j;
    std::cout << "-----------------\n" << std::endl;
    delete i;
    std::cout << "-----------------\n" << std::endl;
    
    const Animal *animals[4] = {new Cat(), new Dog(), new Cat(), new Dog()};
    std::cout << "|||||||||||||||||||||||\n" << std::endl;
    for(int i = 0;i< 4;i++)
    {
        std::cout << "-----------------\n" << std::endl;
        animals[i]->makeSound();
        std::cout << "-----------------\n" << std::endl;
        delete animals[i];
    }
    std::cout << "-----------------\n" << std::endl;
    Dog basic;
    std::cout << "-----------------\n" << std::endl;
    {
        Dog tmp = basic;
        std::cout << "-----------------\n" << std::endl;
    }
    std::cout << "-----------------\n" << std::endl;
    return 0;
}
