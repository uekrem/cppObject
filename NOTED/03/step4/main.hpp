#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Base{
    public:
    Base(){
        std::cout << "Base cons" << std::endl;
    }
};

class Old1:virtual public Base{
    public:
    Old1(){
        std::cout << "Old1 cons" << std::endl;
    }
};

class Old2:virtual public Base{
    public:
    Old2(){
        std::cout << "Old2 cons" << std::endl;
    }
};

class nwd:public Old2, public Old1{
    public:
    nwd(){
        std::cout << "nwd cons" << std::endl;
    }
};

#endif