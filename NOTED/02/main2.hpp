#ifndef MAIN2_HPP
#define MAIN2_HPP

#include <iostream>

class dot{
    private:
    public:
        int a;
        dot();
        ~dot();
        dot(const dot &copy);
        dot    danger();
        dot    &danger2();
        dot    ft_empty(dot obj1);
};

dot::dot()
{
}

dot    dot::danger(){
    dot a;
    a.a = 5;
    std::cout << "copy a adres: " << &a << std::endl;
    std::cout << "copy a deger: " << a.a << std::endl;
    return (a);
}

dot    &dot::danger2(){
    dot a;
    a.a = 3;
    std::cout << "copy a adres: " << &a << std::endl;
    std::cout << "copy a deger: " << a.a << std::endl;
    return (a);
}

dot::dot(const dot &copy){
    std::cout << "copy" << std::endl;
}

dot    dot::ft_empty(dot obj1){
    std::cout << &obj1 << std::endl;
    return (obj1);
}


dot::~dot()
{
    std::cout << "dest" << std::endl;
}

#endif