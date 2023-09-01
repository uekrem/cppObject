#include <iostream> //out ve in fonksiyonlarını içeren bir kütüphane

class user {
    public:
        std::string  name;
        int     id;

        void showInfo();
        user(){
            std::cout << "Constructor calisti" << std::endl;
        }
        ~user(){
            std::cout << "Destructor calisti" << std::endl;
        }

        //Implementasyon yapılması için prototip class icerisine yazilir.
};

class user2 {
    private:
        std::string  name;
        int     id;

    public:
        user2(){
            std::cout << "const calisti" << std::endl;
        }
        user2(std::string name, int id){
            this->name = name;
            this->id = id;
        };
        ~user2(){
            std::cout << "distor calisti" << std::endl;
        }
        //Burada bir Constructor tanımladık . Bununla birlikte nesne oluşturulurken içerisine "set" ihtiyaç duymadan tüm atamaları yapabiliyoruz . (HEADER ONEMLI)
        //Class adıyla birebir aynı olmalı ve return değeri olmamalıdır .
        //Burada bulunan "this->" bir metot veya constructor içerisinde class özelliğinin ve argüman isminin aynı olması durumunda hangisini hangisine atacağını bilememesinden
            //kaynaklanır . Her class'ın ve her objenin kendine ait this pointer'ı bulunmaktadır.

        void    getName();
        void    getId();
        void    setName(std::string changeName);
};
//Kapsülleme yaparak atama yapılan değerleri kontrol ederek nesnelere özellikleri yerleştiririz .
//private sadece class içerisinde erişip , çağırmamızı sağlar .