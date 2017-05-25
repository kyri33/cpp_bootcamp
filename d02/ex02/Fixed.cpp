#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_fpValue = 0;
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(int const val) {
    std::cout << "Integer constructor called " << std::endl;
    this->_fpValue = val << _bits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->_fpValue = roundf(f * (1 << _bits));
}

Fixed::Fixed(const Fixed& cop) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cop;
}

float   Fixed::toFloat() const {
    return ((float)(this->_fpValue)) / (1 << _bits);
}

int     Fixed::toInt() const {
    return this->_fpValue >> _bits;
}

int     Fixed::getRawBits() const {
    std::cout << "Get raw bits function called" << std::endl;
    return this->_fpValue;
}

Fixed &  Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs) 
        this->_fpValue = rhs.getRawBits();
    return *this;
}

void    Fixed::setRawBits(int const raw) {
    this->_fpValue = raw;
}

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}

bool     Fixed::operator>(Fixed const & rhs) {
    return (this->_fpValue > rhs.getRawBits());
}

bool     Fixed::operator<(Fixed const &rhs) {
    return (this->_fpValue < rhs.getRawBits());
}

bool     Fixed::operator<=(Fixed const &rhs) {
    return (this->_fpValue <= rhs.getRawBits());
}

bool     Fixed::operator>=(Fixed const &rhs) {
    return (this->_fpValue >= rhs.getRawBits());
}

bool     Fixed::operator==(Fixed const &rhs) {
    return (this->_fpValue == rhs.getRawBits());
}

bool     Fixed::operator!=(Fixed const &rhs) {
    return (this->_fpValue != rhs.getRawBits());
}

Fixed     Fixed::operator+(Fixed const &rhs) const { 
    return Fixed((this->_fpValue + rhs.getRawBits()) / (1 << _bits));
}

Fixed     Fixed::operator-(Fixed const &rhs) const {
    return Fixed((this->_fpValue - rhs.getRawBits()) / (1 << _bits)); 
}

Fixed     Fixed::operator*(Fixed const &rhs) const {
    return Fixed((this->_fpValue * rhs.getRawBits()) / (1 << _bits));
}

Fixed     Fixed::operator/(Fixed const &rhs) const {
    return Fixed((this->_fpValue / rhs.getRawBits()) / (1 << _bits));
}

Fixed &   Fixed::operator++(void) {
    this->_fpValue = this->_fpValue + 1;
    return *this;
}

Fixed     Fixed::operator++(int) {
    Fixed temp = Fixed(*this);
    this->_fpValue = this->_fpValue + 1;
    return temp;
}

Fixed &     Fixed::operator--(void) {
    this->_fpValue = this->_fpValue - 1;
    return *this;
}

Fixed       Fixed::operator--(int) {
    Fixed temp = Fixed(*this);
    this->_fpValue = this->_fpValue - 1;
    return temp;
}

const int   Fixed::_bits = 8;