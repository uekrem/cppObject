#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class   GUN{
protected:
    int     value;
//Protect tipinde tanımlanan özellikler veya metotlar sadece
    //kendi class içerisinde veya miraçılarında kullanılabilir.
//Oluşturulan nesne üzerinde kullanılamaz.

    public:
        std::string name;
        int         date;
        virtual void    shot();
        //Virtual aynı ad'da metotların miras alanlarla birlikte
            //doğru çalışmaması durumunda kullanılan bir sanal pointerdır
        //Sanal bir tablo oluşturaraktan doğru class'ın içerisindeki
            //metot çağrılır.

        // GUN(){
        //     std::cout << "GUN yep" << std::endl;
        //     value = 5;
        // }
        // ~GUN(){
        //     std::cout << "GUN nope" << std::endl;
        // }
};

class   ak47: public GUN{
    public:
        std::string scope;
        void    shot();
        // ak47(){
        //     std::cout << "ak47 yep" << std::endl;
        // }
        // ~ak47(){
        //     std::cout << "ak47 nope" << std::endl;
        // }
};

class   pistol: public GUN{
    public:
        std::string damage;
        void    shot();
};

class   sniper: public GUN{
    public:
        std::string fire;
};

class   m1{
    public:
        std::string range;
};

void    GUN::shot(){
    std::cout << "Shut up" << std::endl;
}

void    pistol::shot(){
    GUN::shot();
    std::cout << "pistol shot" << std::endl;
}

void    ak47::shot(){
    std::cout << "ak47 shot" << std::endl;
}

#endif