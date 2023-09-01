# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
    public:
        std::string name;
        void announce(void);
        ~Zombie();
};

Zombie*    zombieHorde( int N, std::string name );

#endif