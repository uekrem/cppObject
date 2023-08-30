#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class   PhoneBook{

    private:
        Contact      person[8];
        int          personCount;

    public:
        PhoneBook();
        void            ADD(Contact temp);
        void            SEARCH();
};

#endif