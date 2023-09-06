#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    Fixed::fixed_number = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &now_fixed){ //& konulmama durumunda hata vermesini sor
    std::cout << "Copy constructor called" << std::endl;
    Fixed::fixed_number = now_fixed.fixed_number;
}

void    Fixed::operator = (Fixed &assign_fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    Fixed::fixed_number = assign_fixed.fixed_number;
}

int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (Fixed::fixed_number);
}

void    Fixed::setRawBits(int const raw){
    Fixed::fixed_number = raw;
}
