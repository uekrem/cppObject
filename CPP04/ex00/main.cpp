#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    std::cout << "-------------------------\n" << std::endl;
    const Animal* j = new Dog();
    std::cout << "-------------------------\n" << std::endl;
    const Animal* i = new Cat();
    std::cout << "-------------------------\n" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << "-------------------------\n" << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << "-------------------------\n" << std::endl;
    i->makeSound();
    std::cout << "-------------------------\n" << std::endl;
    j->makeSound();
    std::cout << "-------------------------\n" << std::endl;
    meta->makeSound();
    std::cout << "-------------------------\n" << std::endl;
    delete meta;
    delete j;
    delete i;
    std::cout << "-------------------------\n" << std::endl;
    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();
    wa->makeSound();
    wc->makeSound();
    delete wc;
    delete wa;
    return 0;
}
