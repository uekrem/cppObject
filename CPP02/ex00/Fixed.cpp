#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &r)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_number = r.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &assign_fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_number = assign_fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_number);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_number = raw;
}
