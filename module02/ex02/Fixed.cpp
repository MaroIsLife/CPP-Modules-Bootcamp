#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &p)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = p._value;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (int)std::roundf(n * (1 << this->_nFraction));
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (float)std::roundf((n * (float)(1 << this->_nFraction)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (float)(this->_value / (float)(1 << this->_nFraction));
}

int Fixed::toInt(void) const
{
    return (int)(std::roundf(this->_value / (1 << this->_nFraction)));
}

// Fixed &Fixed::operator=(Fixed const &ref)
// {
// 	std::cout << "Assignation operator called " << std::endl;
// 	this->_value = ref._value;
// 	return *this;
// }

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

Fixed &Fixed::operator*(Fixed const &ref)
{
	this->_value = this->_value * ref._value;
	return (*this);
}

Fixed &Fixed::operator-(Fixed const &ref)
{
	this->_value = this->_value - ref._value;
	return (*this);
}

Fixed &Fixed::operator/(Fixed const &ref)
{
	this->_value = this->_value / ref._value;
	return (*this);
}

Fixed &Fixed::operator+(Fixed const &ref)
{
	this->_value = this->_value + ref._value;
	return (*this);
}

static Fixed const &max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.toFloat() > ref2.toFloat()) // !! Check later why I can't use _value private member attribute
		return (ref1);
	else
		return (ref2);
}

static Fixed const &min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.toFloat() < ref2.toFloat()) // !! Check later why I can't use _value private member attribute
		return (ref1);
	else
		return (ref2);
}



