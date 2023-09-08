#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class   curses{
    private:
        std::string str;
    public:
        curses();
        ~curses();
        void        setstr(std::string str);
        std::string getstr();
        curses  operator+ (curses &obj1);
};

curses::curses(){
    std::cout << "Constructor" << std::endl;
}

curses::~curses(){
    std::cout << curses::getstr() << "Desct" << std::endl;
}

curses curses::operator+ (curses &obj1){
    curses  new_c;

    new_c.setstr(curses::getstr() + "_" + obj1.getstr());
    return (new_c);
}

void    curses::setstr(std::string str){
    curses::str = str;
}

std::string curses::getstr(){
    return (curses::str);
}

std::ostream &operator<<(std::ostream &out, curses &obj1) {
    out << obj1.getstr();
    return (out);
}

#endif