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