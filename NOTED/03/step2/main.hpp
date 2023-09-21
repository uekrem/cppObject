#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Base{

};
class Old : public Base {

};


class Base2{
    
    private:

    public:
        void    ft_screw(){
            std::cout << "Base2 ft_screw" << std::endl;
        }
        void    ft_over(){
            std::cout << "Base2 ft_over" << std::endl;
        }
};
class Old2 : public Base2{
    
    private:
        void    ft_screw(){
            std::cout << "Old2 ft_screw" << std::endl;
        }
    
    public:
        void    ft_over(int a){
                std::cout << "Old2 ft_scft_overrew" << std::endl;
            }
};


class Base3{
    public:
        Base3(){
            std::cout << "Base3 constructor" << std::endl;
        }
        Base3(int a){
            std::cout << "Base3 int constructor" << std::endl;
        }
        Base3(std::string a){
            std::cout << "Base3 string constructor" << std::endl;
        }
        ~Base3(){
            std::cout << "Base3 desctructor" << std::endl;
        }
};
class Old3 : public Base3{
    public:
        Old3() : Base3(5){
            std::cout << "Old3 constructor" << std::endl;
        }
        //Burada miras aldığı class'ın constructor'ına
            //gittiği zaman default olanı değilde bizim
                //belirtmiş olduğumuz constructorla birlikte
                    //oluşturması gerektiğini belirtiyorum.
        ~Old3(){
            std::cout << "Old3 desctructor" << std::endl;
        }
        Old3(const Old3 &r) : Base3("bet"){
            std::cout << "Old3 copy constructor" << std::endl;
        }
};

#endif