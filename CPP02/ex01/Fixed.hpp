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
        void operator = (Fixed const &assign_fixed);
        float   toFloat(void) const;
        int     toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream &operator<< (std::ostream &out,Fixed const &assign_fixed);

#endif