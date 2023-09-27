#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *ptr_brain;
    public:
        Dog();
        ~Dog();
        void    makeSound() const;
};

#endif