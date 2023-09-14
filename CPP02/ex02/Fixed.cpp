#include "Fixed.hpp"

Fixed::Fixed(){
    Fixed::fixed_number = 0;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &now_fixed){
    //Fixed::fixed_number = now_fixed.fixed_number;
    *this = now_fixed;
}

Fixed::Fixed(int num){
    Fixed::fixed_number = num * pow(2,8);
}

Fixed::Fixed(float num){
    Fixed::fixed_number = roundf(num * pow(2,8));
}

Fixed    &Fixed::operator=(Fixed const &assign_fixed)
{
    Fixed::fixed_number = assign_fixed.fixed_number;
    return (*this);
}

int     Fixed::getRawBits(void) const{
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

bool Fixed::operator>(const Fixed &obj1) const
{
	return (this->fixed_number > obj1.fixed_number);
}

bool Fixed::operator<(const Fixed &obj1) const
{
	return (this->fixed_number < obj1.fixed_number);
}

bool Fixed::operator>=(const Fixed &obj1) const
{
	return (this->fixed_number >= obj1.fixed_number);
}

bool Fixed::operator<=(const Fixed &obj1) const
{
	return (this->fixed_number <= obj1.fixed_number);
}

bool Fixed::operator==(const Fixed &obj1) const
{
	return (this->fixed_number == obj1.fixed_number);
}

bool Fixed::operator!=(const Fixed &obj1) const
{
	return (this->fixed_number != obj1.fixed_number);
}

float Fixed::operator*(const Fixed &obj1)
{
	return (this->toFloat() * obj1.toFloat());
}

float Fixed::operator/(Fixed &obj1)
{
	return (this->toFloat() / obj1.toFloat());
}

float Fixed::operator-(Fixed &obj1)
{
	return (this->toFloat() - obj1.toFloat());
}

float Fixed::operator+(const Fixed &obj1)
{
	return (this->toFloat() + obj1.toFloat());
}

Fixed &Fixed::operator++()
{
	this->fixed_number++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->fixed_number--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed x;
	x = *this;
	++*this;
	return (x);
}

Fixed Fixed::operator--(int)
{
	Fixed x = *this;
	--*this;
	return (x);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	return ((obj1.fixed_number < obj2.fixed_number) ? obj1 : obj2);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	return ((obj1.fixed_number < obj2.fixed_number) ? obj1 : obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	return ((obj1.fixed_number > obj2.fixed_number) ? obj1 : obj2);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	return ((obj1.fixed_number > obj2.fixed_number) ? obj1 : obj2);
}