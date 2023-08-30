#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string first_n, std::string last_n, std::string tag, std::string number, std::string secret)
{
    this->first_n = first_n;
    this->last_n = last_n;
    this->tag = tag;
    this->number = number;
    this->secret = secret;
}     

std::string    Contact::getfirst_n()
{
    return (first_n);
}

std::string    Contact::getlast_n()
{
    return (last_n);
}

std::string    Contact::gettag()
{
    return (tag);
}

std::string    Contact::getnumber()
{
    return (number);
}

std::string    Contact::getsecret()
{
    return (secret);
}