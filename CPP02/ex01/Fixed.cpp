#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    Fixed::fixed_number = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &now_fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = now_fixed;
}

Fixed::Fixed(int num){
    std::cout << "Int constructor called" << std::endl;
    Fixed::fixed_number = num * pow(2,8);
}

Fixed::Fixed(float num){
    std::cout << "Float constructor called" << std::endl;
    Fixed::fixed_number = roundf(num * pow(2,8));
}

const Fixed    &Fixed::operator=(Fixed const &assign_fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    Fixed::fixed_number = assign_fixed.fixed_number;
    return (*this);
}

int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (Fixed::fixed_number);
}

void    Fixed::setRawBits(int const raw){
    Fixed::fixed_number = raw;
}

float   Fixed::toFloat(void) const{
    return (Fixed::fixed_number / pow(2,8));
}

int Fixed::toInt(void) const{
    return (Fixed::fixed_number / pow(2,8));
}

std::ostream    &operator<< (std::ostream &out, Fixed  const &assign_fixed){
    out << assign_fixed.toFloat();
    return (out);
}