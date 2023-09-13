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
    return ((float)Fixed::fixed_number / (float)pow(2,8));
}

int Fixed::toInt(void) const{
    return (Fixed::fixed_number / pow(2,8));
}

std::ostream    &operator<< (std::ostream &out, Fixed  const &assign_fixed){
    out << assign_fixed.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed &r) const
{
	return (this->fixed_number > r.fixed_number);
}

bool Fixed::operator<(const Fixed &r) const
{
	return (this->fixed_number < r.fixed_number);
}

bool Fixed::operator>=(const Fixed &r) const
{
	return (this->fixed_number >= r.fixed_number);
}

bool Fixed::operator<=(const Fixed &r) const
{
	return (this->fixed_number <= r.fixed_number);
}

bool Fixed::operator==(const Fixed &r) const
{
	return (this->fixed_number == r.fixed_number);
}

bool Fixed::operator!=(const Fixed &r) const
{
	return (this->fixed_number != r.fixed_number);
}

float Fixed::operator*(const Fixed &r)
{
	return (this->toFloat() * r.toFloat());
}

float Fixed::operator/(Fixed &r)
{
	return (this->toFloat() / r.toFloat());
}

float Fixed::operator-(Fixed &r)
{
	return (this->toFloat() - r.toFloat());
}

float Fixed::operator+(const Fixed &r)
{
	return (this->toFloat() + r.toFloat());
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

Fixed &Fixed::min(Fixed &r1, Fixed &r2)
{
	return ((r1.fixed_number < r2.fixed_number) ? r1 : r2);
}

const Fixed &Fixed::min(const Fixed &r1, const Fixed &r2)
{
	return ((r1.fixed_number < r2.fixed_number) ? r1 : r2);
}

Fixed &Fixed::max(Fixed &r1, Fixed &r2)
{
	return ((r1.fixed_number > r2.fixed_number) ? r1 : r2);
}

const Fixed &Fixed::max(const Fixed &r1, const Fixed &r2)
{
	return ((r1.fixed_number > r2.fixed_number) ? r1 : r2);
}