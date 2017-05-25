#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_fpValue = 0;
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed& cop) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cop;
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



const int   Fixed::_bits = 8;