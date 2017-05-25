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
        Fixed(const Fixed& cop);
        Fixed(int const val);
        Fixed(const float f);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed & operator=(Fixed const & rhs);
        bool operator>(Fixed const &rhs);
        bool operator<(Fixed const & rhs);
        bool operator<=(Fixed const & rhs);
        bool operator>=(Fixed const & rhs);
        bool operator==(Fixed const & rhs);
        bool operator!=(Fixed const & rhs);
        Fixed operator+(Fixed const & rhs) const;
        Fixed operator-(Fixed const & rhs) const;
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed & operator++(void);
        Fixed & operator--(void);
        Fixed operator*(Fixed const & rhs) const;
        Fixed operator/(Fixed const & rhs) const;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);

#endif