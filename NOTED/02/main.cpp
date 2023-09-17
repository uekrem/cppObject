#include "main.hpp"

int main()
{
    /*
    curses  n1;
    curses  n2;
    curses  n3;

    n1.setstr("uqqu");
    n2.setstr("bet");
    n3 = n1 + n2;
    //Toplama metodunda oluşturulan geçici nesne nasıl return ediliyor.
    std::cout << "n3-> " << n3.getstr() << std::endl;
    */

   /*
   curses n1;
   n1.setstr("utku");

   std::cout << n1 << std::endl;
    */

    dot n1;
    std::cout << "---------" << std::endl;
    dot n2;
    n2.a = 2;
    std::cout << "---------" << std::endl;
    std::cout << &n2 << std::endl;
    n2 = n1.danger(n2);
    std::cout << &n2 << std::endl;
    std::cout << "---------" << std::endl;
    //std::cout << ptr << std::endl;
}