#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(Fixed const &p)
{
	this->_value = p._value;
}

Fixed::Fixed(int n)
{
	this->_value = (int)std::roundf(n * (1 << this->_nFraction));
}

Fixed::Fixed(float n)
{
	this->_value = (float)std::roundf((n * (float)(1 << this->_nFraction)));
}

Fixed::~Fixed()
{
}

float Fixed::toFloat(void) const
{
	return (float)(this->_value / (float)(1 << this->_nFraction));
}

int Fixed::toInt(void) const
{
    return (int)(std::roundf(this->_value / (1 << this->_nFraction)));
}

Fixed &Fixed::operator=(Fixed const &ref)
{
	this->_value = ref._value;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &ref)
{
	int i;
	float n;

	i = ref.toInt();
	n = ref.toFloat();
	out << n;
	return(out);
}

bool Fixed::operator==(Fixed const &ref)
{
	if (this->toFloat() == ref.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(Fixed const &ref)
{
	if (this->toFloat() != ref.toFloat())
		return (true);
	else
		return (false);
}


bool Fixed::operator>(Fixed const &ref)
{
	if (this->toFloat() > ref.toFloat())
		return (true);
	else
		return (false);
}


bool Fixed::operator<(Fixed const &ref)
{
	if (this->toFloat() < ref.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(Fixed const &ref)
{
	if (this->toFloat() <= ref.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(Fixed const &ref)
{
	if (this->toFloat() >= ref.toFloat())
		return (true);
	else
		return (false);
}

Fixed &Fixed::operator++()
{
	++this->_value;
	return (*this);
}

Fixed &Fixed::operator++(int)
{
	this->_value++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--this->_value;
	return (*this);
}

Fixed &Fixed::operator--(int)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator*(Fixed const &ref)
{
	Fixed abc(this->toFloat() * ref.toFloat());
	return (abc);
}

Fixed Fixed::operator-(Fixed const &ref)
{
	Fixed abc(this->toFloat() - ref.toFloat());
	return (abc);
}

Fixed Fixed::operator/(Fixed const &ref)
{
	Fixed abc(this->toFloat() / ref.toFloat());
	return (abc);
}

Fixed Fixed::operator+(Fixed const &ref)
{
	Fixed abc(this->toFloat() + ref.toFloat());
	return (abc);
}

Fixed const &Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.toFloat() > ref2.toFloat()) // !! Check later why I can't use _value private member attribute
		return (ref1);
	else
		return (ref2);
}

Fixed const &Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.toFloat() < ref2.toFloat()) // !! Check later why I can't use _value private member attribute
		return (ref1);
	else
		return (ref2);
}
