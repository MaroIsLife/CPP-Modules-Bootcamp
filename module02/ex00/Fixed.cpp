#include "Fixed.hpp"

Fixed::Fixed() : _nFixed(0)
{
    ;
}

Fixed::Fixed(int n) : _nFixed(n)
{
    ;
}

Fixed::Fixed(Fixed &p)
{
    this->_nFixed = p._nFixed;
}

int Fixed::getRawBits()
{
    return (this->_nFixed);
}

void Fixed::setRawBits(int const raw)
{
    this->_nFixed = raw;
}

Fixed &Fixed::operator=(Fixed &ref)
{
    this->_nFixed = ref._nFixed;
    return *this;
}

int main()
{

    return (0);
}