#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact ft_new_contact()
{
    std::string     first_n;
    std::string     last_n;
    std::string     secret;
    std::string     tag;
    std::string     number;
    
    while (first_n.empty())
    {
        std::cout << "Name:";
        std::getline(std::cin, first_n);
    }
    while (last_n.empty())
    {
        std::cout << "Surname:";
        std::getline(std::cin, last_n);
    }
     while (number.empty())
    {
        std::cout << "Number:";
        std::getline(std::cin, number);
    }
     while (tag.empty())
    {
        std::cout << "Tag:";
        std::getline(std::cin, tag);
    }
     while (secret.empty())
    {
        std::cout << "Secret:";
        std::getline(std::cin, secret);
    }
    Contact cons(first_n, last_n, tag, number, secret);
    return (cons);
}

int main()
{
    PhoneBook       admin;
    std::string     word;
    std::string     index;

    while (1)
    {
        std::cout << "---------------PhoneBook---------------" << std::endl;
        std::cout << "1) ADD" << std::endl;
        std::cout << "2) SEARCH" << std::endl;
        std::cout << "3) EXIT"   << std::endl;
        std::getline(std::cin, word);
        if (word == "ADD")
            admin.ADD(ft_new_contact());
        else if (word == "SEARCH")
            admin.SEARCH();
        else if (word == "EXIT")
            break;
        else
            std::cout << "Command not found" << std::endl;
    }
    std::cout << "The program is closed" << std::endl;
}