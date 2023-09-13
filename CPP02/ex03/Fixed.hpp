#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int     fixed_number;
        static const int fixed_bit = 8;
    public:
        Fixed();
        Fixed(int num);
        Fixed(float num);
        Fixed(Fixed const &now_fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &assign_fixed);
        float   toFloat(void) const;
        int     toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        bool operator>(const Fixed &r) const;
        bool operator<(const Fixed &r) const;
        bool operator>=(const Fixed &r) const;
        bool operator<=(const Fixed &r) const;
        bool operator==(const Fixed &r) const;
        bool operator!=(const Fixed &r) const;

        float operator*(const Fixed &r);
        float operator/(Fixed &r);
        float operator-(Fixed &r);
        float operator+(const Fixed &r);

        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed &min(Fixed &r1, Fixed&r2);
        static const Fixed &min(const Fixed &r1, const Fixed&r2);
        static Fixed &max(Fixed &r1, Fixed&r2);
        static const Fixed &max(const Fixed &r1, const Fixed&r2);
};

std::ostream &operator<< (std::ostream &out,Fixed const &assign_fixed);

#endif