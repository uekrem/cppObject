#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class   Contact{
    private:
        std::string     first_n;
        std::string     last_n;
        std::string     tag;
        std::string     number;
        std::string     secret;
    public:
        Contact();
        Contact(std::string first_n, std::string last_n, std::string tag, std::string number, std::string secret);       
        std::string    getfirst_n();
        std::string    getlast_n();
        std::string    gettag();
        std::string    getnumber();
        std::string    getsecret();
};

#endif