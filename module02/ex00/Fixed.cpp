#include "Fixed.hpp"

Fixed::Fixed() : _nFixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n) : _nFixed(n)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &p)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_nFixed = p.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_nFixed);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_nFixed = raw;
}

Fixed &Fixed::operator=(Fixed &ref)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_nFixed = ref.getRawBits();
    return *this;
}