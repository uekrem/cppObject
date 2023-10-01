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


class Base2{
    private:
    public:
        void    ft_rew(){
            std::cout << "ft_rew" << std::endl;   
        }
};
class Old2 : public Base2{
    private:
    public:
        void    ft_screw(){
            std::cout << "ft_screw" << std::endl;   
        }
};


class Base3{
    private:
    public:
        int base_int;
        Base3(){
            base_int = 10;
        }
        void    operator=(const Base3 &ref){
            std::cout << "Base operator" << std::endl; 
            this->base_int = ref.base_int;
        }
        Base3(const Base3 &r){
            *this = r;
            std::cout << "base copy" << std::endl; 
        }
        virtual void    ft_print(){
            std::cout << "Base3 ft_print" << std::endl;
        }
        void    ft_show(){
            std::cout << "Base3 ft_show" << std::endl;
        }
};
class Old3 : public Base3{
    private:
    public:
        int old_int;
        Old3(){
            this->base_int = -1;
            this->old_int = -1;
        }
        Old3(int a){
            this->base_int = a;
            this->old_int = a;
        }
        void    ft_print(){
            std::cout << "Old3 ft_print" << std::endl;
        }
        void    ft_show(){
            std::cout << "Old3 ft_show" << std::endl;
        }
        void    operator=(const Old3 &ref){
            std::cout << "old operator" << std::endl; 
            this->old_int = ref.old_int;
            Base3::operator=(ref);
        }
        Old3(const Old3 &r){
            std::cout << "old copy" << std::endl; 
            *this = r;
        }
};

#endif