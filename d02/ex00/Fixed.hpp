#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
    private:
        static const int    _bits;
        int                 _fpValue;

    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed& cop);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed &  operator=(Fixed const & rhs);
};

#endif