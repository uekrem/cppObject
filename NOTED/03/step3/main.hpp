#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Base{
    private:

    public:
        void    operator=(const Base &r){
            std::cout << "Base Operator=" << std::endl;
        }
};
class Old : public Base{
    private:

    public:
        void    operator=(const Old &r){
            Base::operator=(r);
            //Cagrilmadığı durumda miras aldığı nesnenin
                // değerleri değiştirilmez .
            std::cout << "Old Operator=" << std::endl;
        }
};




#endif