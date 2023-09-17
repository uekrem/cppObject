#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int     fixed_number;
        static const int fixed_bit = 8;
    public:
        Fixed();
        Fixed(const Fixed &now_fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &copyFixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif