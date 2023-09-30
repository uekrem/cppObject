#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog &operator=(const Dog &r);
        Dog(const Dog &r);
        void    makeSound() const;
};

#endif