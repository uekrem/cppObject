#include "main.h"

void    user::showInfo(){
    std::cout << "Adi: " << user::name << std::endl;
    std::cout << "Id: " << user::id << std::endl;
};
//Implementasyon yapılma sebebi karisikligi onlemek ve 
    //header dosyasında sadece tanımlamaların kalmasini istemek

void    user2::setName(std::string changeName){
    name = changeName;
};

void    user2::getName(){
    std::cout << name << std::endl;
}

void    user2::getId(){
    std::cout << id << std::endl;
}

int cst::geta() const{
    return (cst::a);
}
//const metotlar içerisinde ğişiklik yapılamaz . İçerisinde const olmayan fonksiyon çağrılamaz.

void cst::seta(int a){
    cst::a = a;
}

cst::cst(){
    std::cout << "cst constructor" << std::endl;
}

cst::cst(int a){
    cst::a = a;
}