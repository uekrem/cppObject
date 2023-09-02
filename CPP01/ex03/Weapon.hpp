#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class   Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string value);
        ~Weapon();
        std::string gettype();
        void        setType(std::string value);
};
#endif