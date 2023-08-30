#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(){
   personCount = 0;
}

void    PhoneBook::ADD(Contact temp){
    person[personCount % 8] = temp;
    personCount++;
}

void    ft_print(std::string str, int space)
{
    if (space >= 0)
    {
        while (space--)
            std::cout << " ";
        std::cout << str;
    }
    else
    {
        std::cout << str.substr(0,9);
        std::cout << ".";
    }
    std::cout << "|";
}

void    ft_space(Contact cons, int i)
{
    std::string temp;
    int         space;

    temp = std::to_string(i + 1);
    space = 10 - temp.length();
    ft_print(temp, space);
    temp = cons.getfirst_n();
    space = 10 - temp.length();
    ft_print(temp, space);
    temp = cons.getlast_n();
    space = 10 - temp.length();
    ft_print(temp, space);
    temp = cons.gettag();
    space = 10 - temp.length();
    ft_print(temp, space);
}

void    PhoneBook::SEARCH(){

    int         i;
    int         index;

    i = 0;
    while (i <= PhoneBook::personCount - 1 && i <= 3)
    {
        ft_space(PhoneBook::person[i], i);
        std::cout << std::endl;
        i++;
    }
    std::cout << "Index to be searched:";
    std::cin >> index;
    if ((index >= 1 && index <= 8) && index <= PhoneBook::personCount)
    {
        std::cout << PhoneBook::person[index - 1].getfirst_n() << std::endl;
        std::cout << PhoneBook::person[index - 1].getlast_n() << std::endl; 
        std::cout << PhoneBook::person[index - 1].getnumber() << std::endl; 
        std::cout << PhoneBook::person[index - 1].gettag() << std::endl; 
        std::cout << PhoneBook::person[index - 1].getsecret() << std::endl;   
    }
    else
        std::cout << "The entered index is wrong" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}