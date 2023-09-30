#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat &operator=(const Cat &r);
        Cat(const Cat &r);
        void    makeSound() const;
};

#endif