#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int              _nFixed;
	static const int _nFraction = 8;

public:
	Fixed();
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	Fixed(Fixed &p);
	Fixed	&operator=(Fixed &ref);
	float toFloat( void ) const;
	int toInt( void ) const;
};

#endif